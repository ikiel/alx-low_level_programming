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

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		return (NULL);
		free (ptr);
	}
	
	while (dup[count] != '\0')
		count++;

	ptr->str = dup;
	ptr->len = count;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}

	return (ptr);
}
