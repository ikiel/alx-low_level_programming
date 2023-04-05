#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index in a list
 * @head: the listint_t list
 * @index: the position to delete from
 *
 * Return: 1 if success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	
	prev = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}
	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
