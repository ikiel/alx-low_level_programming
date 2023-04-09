#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 * return: Always 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%3d,", n);
			n--;
		}
	}
	else if (n == 98)
	{
		printf("%2d", n);
		n++;
	}
	else
	{
		while (n <= 98)
		{
			printf("%3d,", n);
			n++;
		}
	}
}
