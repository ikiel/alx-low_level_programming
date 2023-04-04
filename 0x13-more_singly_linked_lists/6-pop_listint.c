#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list and returns the data
 * @head: the list
 *
 * Return: data in head node, 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *temp;
	int n;

	ptr = *head;
	temp = ptr->next;

	if (head == NULL)
		return (0);
	if (ptr == NULL)
		return (0);

	n = ptr->n;
	free(ptr);
	ptr = temp;
	return (n);
}
