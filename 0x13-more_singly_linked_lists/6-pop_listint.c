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

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	if ((*head) == NULL)
		return (0);
	free(temp);
	return (n);
}
