#include "main.h"

/**
 * _print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
