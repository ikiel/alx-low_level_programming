#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: the string
 * Return: length of string s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s++;)
	{
		i++;
	}

	return (i);
}
