#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a singly linked list
 * @head:  the head of linked list
 *
 * Return: void success always
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
}
