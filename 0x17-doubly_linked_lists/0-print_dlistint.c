#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: the dlistint_t list
 *
 * Return: size of dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}

	return (i);
}
