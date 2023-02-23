#include "main.h"

/**
 * print_square -  prints a square on the terminal
 * @size: the size of the square
 */

void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height <= size; height++)
		{
			for (width = 0; width <= size; width++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
