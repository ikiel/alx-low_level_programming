#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int height;
	int width;
	int wspace;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (wspace = --size; wspace > 0; wspace--)
			{
				_putchar('b');
			}
			for (width = 1; width <= size; width++)
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
