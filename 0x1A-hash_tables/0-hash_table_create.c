#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 *
 * @size: the size of the hashtable
 *
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (NULL);

	while (size--)
		ht->array[size] = NULL;

	return (ht);
}
