#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of hash table
 * Returns: the created hash table or NULL if the function fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	/*1. Allocate memory for a new table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/*2. Allocate memory for a new node*/
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	/*3. Initialize the node to null*/
	for (i = 0; i < size; i++)
		array[i] = NULL;

	/*4. Fill the table with array and size*/
	table->array = array;
	table->size = size;

	return (table);
}
