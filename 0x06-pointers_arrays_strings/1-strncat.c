#include "main.h"

/**
 * _strncat - concatenatenates two strigns delimited by n
 * @dest: destination string
 * @src: string to copy
 * @n: bytes to copy from src
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
