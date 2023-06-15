#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a dlistint_t list
 * @h: the dlistint_t list
 *
 * Return: the number of elements in a dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}

	return (i);
}
