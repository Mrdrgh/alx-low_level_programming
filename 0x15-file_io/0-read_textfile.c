#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a file stream into the stdout
 * @filename: the name of the file
 * @letters: the number of the letters to output
 * Return: the number of chars printed if secceeded
 * 0 if filename if NULL or if write fails or filename cannot be oppened
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t printed_chars, file_descriptor, letters_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (-1);
	buffer = malloc(sizeof(char) * letters);
	letters_read = read(file_descriptor, buffer, letters);
	printed_chars = write(STDOUT_FILENO, buffer, letters_read);
	free(buffer);
	close(file_descriptor);
	return (printed_chars);
}
