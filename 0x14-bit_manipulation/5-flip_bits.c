#include "main"

/**
 * flip_bits - number of bits to flip to get one number from another
 * @n: the number in decimal
 * @m: the second number in decimal
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;
	unsigned long int diff, result;

	result = 1;
	diff = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (diff & result))
			j++;
		result <<= 1;
	}

	return (j);
}
