#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: byte size of each element
 *
 * Return: pointer to memory, NULL for error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i, j, count;

	if (nmemb == 0 || size == 0)
		return (NULL);

