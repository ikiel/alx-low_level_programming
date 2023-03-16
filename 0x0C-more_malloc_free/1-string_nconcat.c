#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of string to copy from string 2
 *
 * Return: pointer to new string, NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i;
	unsigned int j;
	unsigned int count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;
	count = i + n;
	i = j = 0;
	string = malloc(count);
	if (string == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		string[j] = s1[j];
		j++;
	}
	while (j < count)
	{
		string[j] = s2[i];
		j++;
		i++;
	}
	string[j] = '\0';

	return (string);
}
