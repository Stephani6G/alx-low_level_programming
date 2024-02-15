#include <stdio.h>
#include <string.h>
#include "hash_tables.h"



/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 *
 * @key: key you're looking for
 *
 * Return: the value associated with the key, or NUll if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	node = ht->array[key_index((unsigned char *)key, ht->size)];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
