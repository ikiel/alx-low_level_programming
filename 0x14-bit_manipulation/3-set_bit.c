#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the binary
 * @index: the index at which to set int
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
