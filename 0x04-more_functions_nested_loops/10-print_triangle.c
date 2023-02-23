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
		for (height = 0; height < size; height++)
		{
			for (wspace = --size; wspace > 0; wspace--)
			{
				_putchar(' ');
			}
			for (width = 0; width < size; width++)
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
