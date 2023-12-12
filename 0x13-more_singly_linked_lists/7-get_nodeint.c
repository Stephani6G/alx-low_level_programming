#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t
 * @head: pointer to the first node
 * @index: The index of the node to locate
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);

		head = head->next;
		counter++;
	}
	return (NULL);
}
