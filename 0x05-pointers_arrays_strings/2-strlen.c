#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: the string
 * Return: length of string s
 */

int _strlen(char *s)
{
	int i;

	i = *s;

	while (i != 0)
	{
		i++;
	}

	return (i);
}
