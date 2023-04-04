#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: the listint_t list
 * @n: the data in new node
 *
 * Return: address of the new element, NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	temp = *head;
	ptr->n = n;
	ptr->next = NULL;
	if ((*head) == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;

	return (ptr);
}
