#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	char p;

	i = 0;
	p = s[0];

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		i --;
		p = s[j];
		s[j] = s[i];
		s[i] = p;
	}
}
