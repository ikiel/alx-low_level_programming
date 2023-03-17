#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to array, NULL for error
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int len;
	unsigned int count;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (count = 0; count < len; count++)
	{
		array[count] = min + count;
	}
	return (array);
}
