#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @dest: buffer
 * @src: string
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
