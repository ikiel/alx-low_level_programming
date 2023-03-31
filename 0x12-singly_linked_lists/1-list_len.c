#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: the list_t list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *ptr;

	if (h == NULL)
		exit(0);

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
