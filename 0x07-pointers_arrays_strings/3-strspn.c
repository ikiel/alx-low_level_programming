#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string
 * @accept: bytes to check
 *
 * Return: number of accept bytes in n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;
	unsigned int count;

	i = 0;
	n = 0;
	count = 0;

	while (accept[count] != '\0')
	{
		count++;
	}

	while (s[i] != '\0')
	{
		for (j = 0; j < count; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}

	return (n);
}
