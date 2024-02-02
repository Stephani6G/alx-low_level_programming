#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head node of the doubly linked list
 * @idx: index where the node should be added. Starts at 0
 *
 * @n: data to add to the n member of the new node
 *
 * Return: Address of the new node or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	count = 0;
	new->n = n;

	/* if list is empty, and index is 0 */
	if (!*h && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		tmp = *h;

		/* traverse the list upto the idx */
		while (tmp && count < idx)
		{
			tmp = tmp->next;
			count++;
		}

		if (!*h)
			return (NULL);

		tmp->prev->next = new;
		new->prev = tmp->prev;
		tmp->prev = new;
		new->next = tmp;

	}

	return (new);
}
