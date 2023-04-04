#include "lists.h"

/**
 * print_listint - prints all elements singly linked list of type listint_t
 * @h: the listint_t list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int count;

	ptr = h;
	count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
