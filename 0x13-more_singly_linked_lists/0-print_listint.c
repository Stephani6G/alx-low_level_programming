#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("%d\n", h->index);
		h = h->next;
		index++;
	}
	return (index);
}
