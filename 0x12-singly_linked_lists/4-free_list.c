#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the list to free.
 *
 * Return: void success always
 */


void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
