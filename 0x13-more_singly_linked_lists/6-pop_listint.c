#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: head of linked list.
 * Return: head of node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *h, *temp;
	int hnode;

	if (*head == NULL)
		return (0);

	temp = *head;
	hnode = temp->n;
	h = temp->next;
	free(temp);
	*head = h;

	return (hnode);
}
