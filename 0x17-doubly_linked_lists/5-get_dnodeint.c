#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: the head node of a doubly linked list
 * @nidex: index of the node, starts from 0
 *
 * Return: node at index, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	i = 0;

	while (head && i++ < index)
		node = node->next;

	if (!head)
		return NULL;

	return (node);
}
