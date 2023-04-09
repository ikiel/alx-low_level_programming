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
	unsigned int printed;
	FILE *fp;
	char buffer[];

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (fgets(buffer, letters + 1, fp) != NULL)
		_puts(buffer);
	fclose(fp);
	printed = sizeof(buffer);
	if (printed > letters)
		return (0);
	return (printed);
}

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * return: null
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
