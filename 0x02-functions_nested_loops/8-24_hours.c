#include "main.h"

/**
 * jack_bauer - prints every minute of the day if Jack Bauer
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	char th;
	char h;
	char tm;
	char m;

	for (th = '0'; th <= '2'; th++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			if (th == '2' && h == '4')
			{
				_putchar (th);
				_putchar (h);
				_putchar (':');
				_putchar ('0');
				_putchar ('0');
				break;
			}
			else
			{
				for (tm = '0'; tm <= '5'; tm++)
				{
					for (m = '0'; m <= '9'; m++)
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
}
