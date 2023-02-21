#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int ret;

	if (n > 0)
	{
		ret = n % 10;
		return (ret);
	}
	else
	{
		ret = n % -10;
		return (ret);
	}
}
