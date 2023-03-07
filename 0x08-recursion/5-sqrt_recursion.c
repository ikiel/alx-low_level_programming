#include "main.h"

int real_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n; -1 if n has no square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (real_sqrt(n, 0));
}

/**
 * real_sqrt - recurses to find natural square root of a number
 * @n: the number
 * @i: iterator
 *
 * Return: the resulting square root
 */

int real_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (real_sqrt(n, i + 1));
	}
}
