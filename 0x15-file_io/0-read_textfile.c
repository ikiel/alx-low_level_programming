#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the file to read
 * @letters: number of letters to read and print
 *
 * Return: Actual number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int printed = 0;
	int c;
	FILE *fp;
	char *buffer;

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((c = getc(fp)) != EOF)
	{
		_putchar(c);
		printed++;
		if (printed == letters)
			break;
	}

	fclose(fp);

	free(buffer);
	if (printed > letters)
		return (0);
	return (printed);
}
