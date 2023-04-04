#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the list
 * @idx: where node should be added
 * @n: the node to be added
 *
 * Return: address of new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	prev = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (idx - 1); i++)
	{
		prev = prev->next;
		if (prev == NULL)
			return (NULL);
	}
	ptr->n = n;
	ptr->next = prev->next;
	prev->next = ptr;

	return (ptr);
}
