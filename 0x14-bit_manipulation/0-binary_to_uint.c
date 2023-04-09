#include "main.h"

/**
 * binary_to_uint - converts binary to base 10
 * @b: the binary number to convert
 *
 * Return: converted number, NULL for error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += 1 << (length - 1 - i);
	}

	return (sum);
}
