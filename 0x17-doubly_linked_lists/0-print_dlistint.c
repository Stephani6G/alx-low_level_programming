#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node of the doubly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *tmp;

	count = 0;
	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);
}
