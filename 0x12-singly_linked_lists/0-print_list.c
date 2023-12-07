#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - function prints all elements of a list lists_t
* @h: list_t to print elements
* Return: the number of nodes in list
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
