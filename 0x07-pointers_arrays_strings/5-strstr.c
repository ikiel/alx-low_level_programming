#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to match
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int count;
	int j;
	int k;

	k = 0;

	count = 0;
	while (needle[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (haystack[i] != '\0')
	{
		k = i;
		for (j = 0; j < count; j++)
		{
			if (haystack[k] == needle[j])
				return ((haystack + k));
			k++;
		}
	}
	return ('\0');
}
