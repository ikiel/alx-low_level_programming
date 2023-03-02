#include "main.h"

/**
 * _strcat - copies string to buffer
 * @dest: destination string
 * @src: string to copy
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
