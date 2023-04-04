#include "lists.h"

/**
 * get_nodeint_at_index - adds a new node at the beginning of a listint_t.
 * @head: head of linked list.
 * @index: index of the node starting at 0.
 * 
 * Return: nth node or NULL if index does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
