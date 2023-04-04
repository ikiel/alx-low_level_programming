#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list and returns the data
 * @head: the list
 *
 * Return: data in head node, 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	if ((*head)->next == NULL)
	{
		n = (*head)->n;
		free(*head);
		return (n);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (n);
}
