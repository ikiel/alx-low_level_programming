#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of a listint_t list
 * @head: the listint_t list
 * @n: the data in the new node
 *
 * Return: address of new node; NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
