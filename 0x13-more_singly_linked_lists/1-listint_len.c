#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * listint_len -  function that returns
 *		the number of elements in a list
 * @h: pointer to head of listint_t
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}
	return (index);
}
