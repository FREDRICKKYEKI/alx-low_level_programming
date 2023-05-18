#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head->prev != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head->next != NULL)
	{
		head = head->next;
		free(head);
	}
}
