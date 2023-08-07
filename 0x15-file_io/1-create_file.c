#include "main.h"
/**
 * create_file - creates a file, if id deos exst,
 * trunctuate it
 * @filename: the path of the file
 * @text_content: the content of the newly created file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t file_desc, length, char_written;

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1 || !filename)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	char_written = write(file_desc, text_content, length);
	if (char_written == -1)
		return (-1);
	close(file_desc);
	return (1);
}
