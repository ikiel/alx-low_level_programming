#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char p;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		p = s[j];
		s[k] = p;
		k++;
	}
}
