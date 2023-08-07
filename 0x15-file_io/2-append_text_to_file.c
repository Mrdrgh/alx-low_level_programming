#include "main.h"
/**
 * append_text_to_file - appends the text in the function to the end
 * of the file
 * @filename: the path of the file
 * @text_content: the content appended to the file
 * Return: 1 if success, -1 if something fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file_descriptor, chars_printed, length;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_APPEND | O_WRONLY);
	if (text_content)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	chars_printed = write(file_descriptor, text_content, length);
	if (chars_printed == -1 || file_descriptor == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
