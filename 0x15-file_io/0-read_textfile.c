#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 *
 * Return: number of read and printed letters, 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read, length, res;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	length = write(STDOUT_FILENO, buffer, n_read);
	if (length == -1 || length != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (length);
}
