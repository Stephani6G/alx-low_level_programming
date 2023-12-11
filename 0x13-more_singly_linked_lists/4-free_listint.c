#include "lists.h"
#include <stdio.h>

/**
 * free_listint  - a function that frees a listint_t list
 * @head: first node in list
 * Return: void succes always
 */

void free_listint(listint_t *head)
{
listint_t *temp;

	if (!head)
	return;
	while (head->next)

	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
