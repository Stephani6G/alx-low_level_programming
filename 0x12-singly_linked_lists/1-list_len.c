#include "lists.h"

/**
 * list_len - a function that returns the number of
 *		elements in a linked list_t list
 * @h: a linked list
 * Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
