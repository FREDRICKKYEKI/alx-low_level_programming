#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *tok;

	/* 1. Check if table exists */
	if (ht == NULL)
		return;

	printf("{");

	tok = "";

	/* 2. Iterate through the table  */
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		/* 3. Iterate through the linked lists (nodes): print key and value */
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", tok, temp->key, temp->value);
			tok = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
