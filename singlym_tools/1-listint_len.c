#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len - Returns the number of elements in a list
 * @h: pointer to head of listint_t
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
