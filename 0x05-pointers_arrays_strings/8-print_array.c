#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers;
 * @a: first integer
 * @n: second integer
 */

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
