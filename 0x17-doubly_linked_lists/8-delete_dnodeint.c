#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index in doubly linked list
 *
 * @head: head node of the doubly linked list
 * @index: index at which to delete node. Starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	if (!*head)
		return (-1);

	count = 0;
	tmp = *head;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	if (!tmp)
		return (-1);

	if (index == 0)
		*head = tmp->next;
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
	}

	free(tmp);

	return (1);
}
