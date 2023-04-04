#include "lists.h"

/**
 * sum_listint - sums all elements of a singly linked list of type listint_t
 * @head: the listint_t list to sum
 *
 * Return: sum of nodes; 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
