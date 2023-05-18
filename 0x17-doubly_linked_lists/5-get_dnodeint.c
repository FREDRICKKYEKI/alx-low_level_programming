#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node to be found
 * 
 * Return: nth node or NULL if does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head ==NULL)
		return (NULL);
	
	while (head->prev != NULL)
		head = head->prev;
	
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}

