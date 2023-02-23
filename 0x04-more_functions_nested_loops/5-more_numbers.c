#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	int j;
	char c;

	for (i = 0; i <=10; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (j = 0; j <= 5; j++)
		{

