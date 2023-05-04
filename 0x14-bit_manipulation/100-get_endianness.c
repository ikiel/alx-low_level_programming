#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int f;

	f = 2;
	if (f & 1)
		return (0);
	else
		return (1);
}
