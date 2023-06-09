#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of hash table
 *
 * Return: the created hash table or
 * NULL if the function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*1. Allocate memory for a new table*/
	/*2. Allocate memory for a new node*/
	/*3. Initialize the node to null*/
	/*4. Fill the table with arr and size*/
	hash_table_t *table;
	hash_node_t **arr;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	table->array = arr;
	table->size = size;

	return (table);
}
