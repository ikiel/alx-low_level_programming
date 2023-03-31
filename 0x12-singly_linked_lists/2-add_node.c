#include "lists.h"

/**
 * add_node - adds new node to beginning of c
 * @head: node head
 * @str: string to insert in node
 *
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *dup;
	unsigned int count = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		exit(0);
	dup = strdup(str);

	while (dup[count] != '\0')
		count++;

	ptr->str = dup;
	ptr->len = count;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
