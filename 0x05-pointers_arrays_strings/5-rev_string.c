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

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	for (j = i - 1; j >= 0; j--)
	{
		p = s[j];
		s[k] = p;
		k++;
	}
}
