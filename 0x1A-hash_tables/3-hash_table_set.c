#include "hash_tables.h"
/**
 * add_hash_node - adds a node at the beginning of a hash at a given index
 *
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 *
 * Return: head of the hash
 */

hash_node_t *add_hash_node(hash_node_t **head, const char *key,
							const char *value)
{
	/* 1. Create a new temp node */
	hash_node_t *tmp;

	/* 2. Assign passed node to it */
	tmp = *head;

	/**
	 * 3. Iterate through the linked list node
	 *  and if key exists, replace the value
	 */
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	/**
	 *  4. Else, reassign the temp node to new memory block
	 */
	tmp = malloc(sizeof(hash_node_t));

	/* 5. If allocation fails... */
	if (tmp == NULL)
		return (NULL);

	/* 6. Fill in key value pair in the new node */
	tmp->key = strdup(key);
	tmp->value = strdup(value);

	/* 7. Point the temp to the created head */
	tmp->next = *head;

	/* 8. Assign the new node to be head */
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to score
 * Return: 1 if success, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	/* Create a key ( size >= key >= 0 )*/
	k_index = key_index((unsigned char *)key, ht->size);

	/*Add node to table*/
	if (add_hash_node(&(ht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}
