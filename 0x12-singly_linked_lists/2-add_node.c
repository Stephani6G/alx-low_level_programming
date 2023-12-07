#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* add_node - function that adds a
* new node at the beginning of a list_t list.
* @head: pointer to the first element of the list.
* @str: string to be duplicated in the new node.
* Return: address of the new element, or NULL on failure
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!(head))
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str)
		new->str = strdup(str);

	new->next = *head;
	*head = new;

	return (new);
}
