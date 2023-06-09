#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value associated with key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_idx;
	hash_node_t *temp;

	/* 1. Check if arguments are null */
	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	/* 2. Get key */
	k_idx = key_index((unsigned char *)key, ht->size);

	/* 3. Get node from table */
	temp = ht->array[k_idx];

	/* 4. Iterate through the nodes the index to get value */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
