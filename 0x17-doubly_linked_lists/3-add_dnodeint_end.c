#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t list
 * @head: the dlistint_t list
 * @n: the data in added node
 *
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		h = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	new->next = NULL;
	new->n = n;

	return (new);
}
