#include "main.h"

/**
 * flip_bits -  returns number of bits needed to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	int i;

	f = n ^ m;

	for (i = 0; f != 0; i++)
	{
		f = f & (f - 1);
	}

	return (i);
}
