#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates space and assigns copy of a string
 * @str: string to duplicate
 * Return: NULL for error, pointer to string
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;

	new = malloc(sizeof(char) * i);
	if (new == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		new[j] = str[j];
	}

	return (new);
}
