#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the listint_t list
 * @index: the node to return
 *
 * Return: the node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);
}
