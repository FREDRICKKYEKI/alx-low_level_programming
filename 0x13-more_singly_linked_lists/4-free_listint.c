#include "lists.h"

 /**
 * free_listint - frees a listint_t.
 * @head: head of linked list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
