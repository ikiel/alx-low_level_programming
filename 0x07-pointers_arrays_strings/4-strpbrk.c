#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to s that matches accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int count;
	int j;

	count = 0;
	while (accept[count] != '\0')
		count++;

	i = 0;
	while (s[i] != '0')
	{
		for (j = 0; j < count; j++)
		{
			if (s[i] == accept[j])
				return ((s + i));
		}

		i++;
	}

	return ('\0');
}
