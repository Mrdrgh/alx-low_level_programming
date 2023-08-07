#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char **argv)
{
    int fd_from, fd_to, read_bytes, write_bytes;
    char buffer[BUFSIZE];
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (fd_to == -1)
    {
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	exit(99);
    }

    while ((read_bytes = read(fd_from, buffer, BUFSIZE)) > 0)
    {
	write_bytes = write(fd_to, buffer, read_bytes);
	if (write_bytes != read_bytes)
	{
	    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	    close(fd_from);
	    close(fd_to);
	    exit(99);
	}
    }

    if (read_bytes == -1)
    {
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	exit(98);
    }

    if (close(fd_from) == -1)
    {
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	close(fd_to);
	exit(100);
    }

    if (close(fd_to) == -1)
    {
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
    }

    return (0);
}

