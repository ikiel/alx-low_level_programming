#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @index: where to set bit, starting from zero
 * @n: the binary
 *
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	binary = ~(1 << index);
	*n = *n | binary;

	return (1);
}
