#include "main.h"

/**
 * jack_bauer - prints every minute of the day if Jack Bauer
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	for (int th = 0; th <= 2; th++)
	{
		for (int h = 0; h <= 4; h++)
		{
			for (int tm = 0; tm <= 5; tm++)
			{
				for (int m = 0; m <= 9; m++)
				{
					_putchar (th);
					_putchar (h);
					_putchar (':');
					_putchar (tm);
					_putchar (m);
					_putchar ('\n');
				}
			}
		}
	}
}
