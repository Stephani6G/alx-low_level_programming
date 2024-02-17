#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value to
 * @key: the key. cannot be an empty string
 *
 * @value: the value associated with the key. value must be duplicated. value
 *
 * can be an empty string
 *
 * Incase of collision, add the new node at the beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	index = key_index((unsigned char *)key, ht->size);

	/* allocate node */
	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	/* set in hash table */
	if (!ht->array[index])
	{
		ht->array[index] = node;
		node->next = NULL;
	}
	else
	{
		tmp = ht->array[index];
		node->next = tmp;
		ht->array[index] = node;
	}

	return (1);
}
