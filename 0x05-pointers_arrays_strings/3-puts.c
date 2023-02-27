#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: string to print
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
