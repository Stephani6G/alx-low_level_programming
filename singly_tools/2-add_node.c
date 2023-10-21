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
	list_t *new_node;

	if (!(head))
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (str)
		new_node->str = strdup(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
