#include "lists.h"

/**
 * add_node_end - adds new node to end of list
 * @head: node head
 * @str: string to insert in node
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;
	char *dup;
	unsigned int count = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		exit(0);
	temp = *head;

	while (temp != NULL)
		temp = temp->next;
	dup = strdup(str);
	temp->next = ptr;

	while (dup[count] != '\0')
		count++;

	ptr->str = dup;
	ptr->len = count;
	ptr->next = NULL;

	return (ptr);
}
