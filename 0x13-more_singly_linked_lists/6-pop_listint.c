#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint -  a function that deletes the
 *		head node of a listint_t linked list
 * @head: a pointer to the first node
 * Return: if  empty return 0 success
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
