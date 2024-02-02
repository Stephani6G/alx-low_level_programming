#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a doubly linked list
 * @head: pointer to the first node of the doubly linked list
 *
 * Return: Sum of all the data, if the list is empty return 0
 */


int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	sum = 0;
	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
