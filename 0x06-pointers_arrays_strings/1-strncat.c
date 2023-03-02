#include "main.h"

/**
 * _strncat - copies string to buffer
 * @dest: destination string
 * @src: string to copy
 * @n: bytes to copy from src
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
