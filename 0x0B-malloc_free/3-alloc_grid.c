#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2D array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int *grid;
	unsigned int k;
	int j;
	int i;

	if (width == 0 || height == 0)
		return (NULL);
	k = width * height;
	grid[width][height] = malloc(sizeof(int) * k);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
