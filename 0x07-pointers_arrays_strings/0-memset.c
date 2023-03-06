#include "main.h"

/**
 * _memset - fills the first n bytes of s with the constant byte b
 * @s: memory area
 * @b: constant byte to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
