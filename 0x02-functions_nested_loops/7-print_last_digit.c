#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int ret;

	ret = n % 10;
	if (ret < 0)
	{
		ret *= -1;
	}
	_putchar ('0' + ret);
	return (ret);
}
