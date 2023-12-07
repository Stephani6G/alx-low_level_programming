#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end -function adds a new node at the end of a list_t list
* @head: the linked list
* @str: string to be added to list
*
* Return: NULL (if function failed),
* the address of the new element (otherwise)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int length = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	if (str)
		new->str = strdup(str);

	new->next = NULL;

	while (str && str[length])
		length++;

	new->len = length;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
