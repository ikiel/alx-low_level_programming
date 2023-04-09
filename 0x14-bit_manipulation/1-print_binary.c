#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the binary number
 *
 * Return: void type
 */

void print_binary(unsigned long int n)
{
	int mask, bits, i;

	if (n == NULL)
		return;
	/* check the number of bits in the integer */
	bits = sizeof(n) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1 << i;
		if ((n & mask) == '1')
			_putchar('1');
		else if ((n & mask) == '0')
			_putchar('0');
	}
	_putchar('\n');
}

