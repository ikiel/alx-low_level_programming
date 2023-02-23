#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= 2)
			{
				int j;

				for (j = 1 ; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
