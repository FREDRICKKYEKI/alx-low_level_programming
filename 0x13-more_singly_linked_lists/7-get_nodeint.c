#include "lists.h"

/**
 * get_nodeint_at_index - adds a new node at the beginning of a listint_t
 * @head: head of linked list.
 * @index: index of the node starting at 0
 * Return: nth node or NULL if index does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count;

	count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
		if (count == index)
		break;
	}
	if (index > count || index <= 0)
	return (NULL);

	return (head);
}
