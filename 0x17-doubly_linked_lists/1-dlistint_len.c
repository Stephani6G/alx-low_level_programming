#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head node of the doubly linked list
 *
 * Return: number of elements in the doubly linked list
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *tmp;

	count = 0;
	tmp = h;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);
}
