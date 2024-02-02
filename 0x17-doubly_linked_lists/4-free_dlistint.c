#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list from memory
 * @head: first node in the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
