#include "main.h"

int real_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (real_prime(n, n - 1));
	}
}

/**
 * real_prime - recursively check if a number is a prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if n is not
 */

int real_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (real_prime(n, i - 1));
	}
}
