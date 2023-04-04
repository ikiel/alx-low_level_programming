#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set head to null
 * @head: the listint_t list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
		return;
	ptr = *head;
	temp = *head;
	if (ptr == NULL)
	{
		free(ptr);
		return;
	}

	while (ptr->next != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	free(ptr);
	*head = NULL;
}
