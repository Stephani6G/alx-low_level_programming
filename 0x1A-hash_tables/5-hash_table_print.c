#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - func that prints a hash table
 * @ht: the hash table to print
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int found = 0;

	if (!ht)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (found)
					printf(", ");

				printf("'%s': '%s'", curr->key, curr->value);

				if (!found)
					found = 1;

				curr = curr->next;
			}
		}
		++i;
	}

	printf("}\n");
}
