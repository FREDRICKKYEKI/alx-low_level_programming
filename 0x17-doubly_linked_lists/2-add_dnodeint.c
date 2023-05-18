#include "lists.h"
/**
 * add_dnodeint - adds a new list at the beginning
 * of a new list
 * @head: pointer to pointer of head of list
 * @n: integer to store in the list
 *
 * Return: address of new element or NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_head->next = h;

	if (h != NULL)
		h->prev = new_head;

	*head = new_head;

	return (new_head);
}
