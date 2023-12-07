#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: Pointer to pointer to the head of the list
* @str: string to be added to list
* Return: NULL (if function failed),
* the address of the new element (otherwise)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp_node;
	int length = 0;

	if (!head)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	if (str)
		node->str = strdup(str);

	node->next = NULL;

	while (str && str[length])
		length++;

	node->len = length;

	if (!(*head))
	{
		*head = node;
		return (node);
	}

	temp_node = *head;
	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = node;
	return (node);
}
