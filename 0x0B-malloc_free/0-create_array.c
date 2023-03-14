#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of char and initializes wita char
 * @size: size of array
 * @c: specspecific char to initialize array
 * Return: NULL for failure, 0 for success
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
