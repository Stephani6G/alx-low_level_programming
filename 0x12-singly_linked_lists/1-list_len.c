#include "lists.h"

/**
* list_len - returns the number of elements in a linked list lists_t
*
* @h: linked list
* Return: number of elements in h
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;

		h = h->next;
	}

	return (length);
}
