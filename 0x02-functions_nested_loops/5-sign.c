#include "main.h"

/**
 * print_sign - print the sign of a number
 *@n: the number to be checked
 *Return: 1 if sign is +, 0 if n is zero and -1 if sign is -
 */

int print_sign(int c)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
