#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int n;
	int j;

	i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i / 2) + 1;
	}
	else
	{
		n = i / 2;
	}

	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
