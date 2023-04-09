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

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	/* check the number of bits in the integer */
	bits = sizeof(n) * 2;

	bits = bits - 1;

	while ((n & (1 << bits)) == 0)
		bits--;

	for (i = bits; i >= 0; i--)
	{
		mask = 1 << i;
		mask = ((n & mask) ? '1' : '0');
		_putchar(mask);
	}
}

