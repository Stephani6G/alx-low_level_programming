#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the
 *		end of a listint_t list
 * @head: first node of the list
 * @n: value stored at new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *cop;

	i = malloc(sizeof(listint_t));

	if (!i)
	return (NULL);
	i->n = n;
	i->next = NULL;

	if (!head)
		return (NULL);

	if (*head)
	{
		cop = *head;
		while (cop->next)
	{
		cop = cop->next;
	}
		cop->next = i;
	}

	else
	{
		*head = i;
	}

	return (i);
}
