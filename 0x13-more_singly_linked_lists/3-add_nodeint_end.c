#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: first node of the list
 * @n: value stored at new node
 * Return: : the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *copy;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		return (NULL);

	if (*head)
	{
		copy = *head;
		while (copy->next)
	{
		copy = copy->next;
	}
		copy->next = new_node;
	}

	else
	{
		*head = new_node;
	}

	return (new_node);
}
