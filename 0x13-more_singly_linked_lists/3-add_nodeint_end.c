#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: head of linked list
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newTail, *temp;

	newTail = malloc(sizeof(listint_t));
	if (newTail == NULL)
	{
		printf("\nError!!!");
		return (NULL);
	}
	newTail->n = n;
	newTail->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newTail;
	}
	else
	{
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = newTail;

	}

	return (*head);
}
