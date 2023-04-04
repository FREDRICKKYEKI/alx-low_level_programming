#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node
 * at a given index of a listint_t.
 * @head: head of linked list.
 * @index: index of the list where the new node should be deleted.
 * Return: 1 if succeeded or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *prev, *next;

	prev = *head;
	count = 0;
	if (index != 0)
	{
		while (count < index - 1 && prev != NULL)
		{
			prev = prev->next;
			count++;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
