#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a dlistint_t list
 * @head: dlistint_t list
 * @n: data in node to add
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
