#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to the first element of the list.
* @str: string to be duplicated in the new node.
* Return: address of the new element, or NULL on failure
**/

list_t *add_node(list_t **head, const char *str)
{
	if (!head)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	else
	{
		new_node->str = NULL;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
