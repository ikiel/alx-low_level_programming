#include "main.h"

/**
 * binary_to_uint - converts binary to base 10
 * @b: the binary number to convert
 *
 * Return: converted number, NULL for error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m_factor = 1, sum = 0;
	int i, index = 0;
	intptr_t b_char;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
		index++;
	for (i = 0; i < index; i++)
	{
		b_char = (intptr_t) b[i];
		/* printf ("%ld", b_char); */
		if (b_char != 1 || b_char != 0)
			return (0);
		if (i > 0)
			m_factor *= 2;
		sum += b_char * m_factor;
	}

	return (sum);
}
