#include "main.h"

/**
 * get_bit -  returns value of a bit at a given index
 * @n: the binary
 * @index: the index
 *
 * Return: value of bit at index, -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int f;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	f = 1 << index;

	if ((n & f) == 0)
		return (0);
	else
		return (1);
}
