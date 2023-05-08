#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file containing string to be appended
 * @text_content: string to append
 *
 * Return: 1 for success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[length])
		length++;

	result = write(fd, text_content, length);
	if (result == -1)
		return (-1);

	result = close(fd);
	if (result == -1)
		return (-1);

	return (1);
}
