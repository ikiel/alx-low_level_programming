#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: first occurence of c in s, or 0 if c not found
 */

char *_strchr(char *s, char c)
{
	int count;
	int j;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	for (j = 0; j < count; j++)
	{
		if (s[j] == c)
		{
			return ((s + j));
		}
		else if ((s[j] != c) && (s[j] != '\0'))
		{
			continue;
		}
	}

	return ('\0');
}
