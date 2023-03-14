#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL on filer, pointer on success
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int count;

	count = 0;
	j = 0;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';
	while (s1[count] != '\0')
		count++;
	i = ++count;
	count = 0;

	while (s2[count] != '\0')
		count++;
	i += count;
	count = 0;
	concat = malloc(sizeof(char) * i);
	if (concat == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		concat[count] = s1[count];
		count++;
	}
	while (s[j] != '\0')
	{
		concat[count] = s2[j];
		j++;
		count++;
	}
	s[count] = s[j];
	return (s);
}
