#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: the listint_t list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ptr;
	}
	*head = previous;
	return (*head);
}
