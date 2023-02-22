#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i  <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result;

			if (j == 9)
			{
				printf("%d\n", result);
			}
			else
			{
				printf("%d, ", result);
			}
		}
	}
}
