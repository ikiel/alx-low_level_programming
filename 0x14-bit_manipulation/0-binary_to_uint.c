#include "main.h"

/**
 * binary_to_uint - changes binary to an unsigned integer
 * @b: the binary number
 *
 * Return: the unsigned int or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal << 1;
		if (*b++ == '1')
			decimal += 1;
	}

	return (decimal);
}
