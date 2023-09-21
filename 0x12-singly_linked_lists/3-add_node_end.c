#include "lists.h"

/**
 * add_node_end - Appends a new node to the end of a linked list.
 * @head: Pointer to pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;
	int length = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if (str)
		new_node->str = strdup(str);

	new_node->next = NULL;

	while (str && str[length])
		length++;

	new_node->len = length;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;

	return (new_node);
}

