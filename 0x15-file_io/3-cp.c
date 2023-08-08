#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_buffer - creates a buffer of 1024
 * and checks if nothing fails , else exit on 99
 * @file: the file name of the to file
 * Return: the newly allocated char* var
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes a file stream
 * @file_from: the first file to close
 * @file_to: the secont one to close
*/
void close_file(int file_from, int file_to)
{
	int c = close(file_from);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
/**
 * main - trial for all the functions
 * @ac: the args
 * @av: the number of the args
 * Return: 0 on success
*/
int main(int ac, char *av[])
{
	char *buffer;
	int from, to, chars_read, chars_write;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buffer = create_buffer(av[2]);
	while ((chars_read = read(from, buffer, 1024)) > 0)
	{
		chars_write = write(to, buffer, chars_read);
		if (chars_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	close_file(from, to);
	return (0);
}
