#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the binary number
 *
 * Return: void type
 */

void print_binary(unsigned long int n)
{
	int mask, bits, i = 0;

	if (n == NULL)
		return;
	/* check the number of bits in the integer */
	bits = sizeof(n) * 8;
	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1 << i;
		_putchar ((n & mask) ? '1' : '0');
	}
	_putchar('\n');
}

