#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: the binary
 * @index: the index of proposed bit
 *
 * Return: value of bit at index, -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int convert, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	convert = 1 << index;
	result = n & convert;

	if (result == convert)
		return (1);

	return (0);
}
