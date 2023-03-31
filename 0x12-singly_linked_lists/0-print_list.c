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
		exit(98);
	}
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", ptr->len);
			printf("%s\n", ptr->str);
		}
		ptr = ptr->next;
		count++;
	}

	return (count);
}
