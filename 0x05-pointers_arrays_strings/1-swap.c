#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
