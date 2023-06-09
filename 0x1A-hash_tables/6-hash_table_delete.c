#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *temp2;

	if (ht == NULL)
		return;

	/* 1. Iterate through the table through every node */
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		/**
		 * 2. Iterate through the linked list node to free
		 *		i). key
		 *		ii). value
		 *		iii). The whole node
		 */
		while ((temp2 = temp) != NULL)
		{
			temp = temp->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}

	/* 3. Clear the array (pointer of pointers)*/
	free(ht->array);

	/* 4. Finally, clear the table*/
	free(ht);
}
