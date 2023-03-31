#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr;

	if (h == NULL)
	{
		printf("This list is an empty list");
	}
	ptr = h;

	while (ptr->next != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", ptr->str);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
