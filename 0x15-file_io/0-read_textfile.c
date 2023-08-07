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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

