#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the
 *		elements of a list_t list
 * @h: list_t to print elements
 * Return: the number of nonde in the list_t
 */

size_t print_list(const lists_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->str);
		node++;
		h = h->next;
	}
	return (nodes);
}
