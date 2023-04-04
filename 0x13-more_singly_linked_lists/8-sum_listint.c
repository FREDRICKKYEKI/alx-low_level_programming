#include "lists.h"

/**
 * sum_listint - adds all data(n)  of a listint_t
 * @head: head of linked list.
 * Return: the sum of all the data (n)
 * of a listint_t linked list or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int n;

	n = 0;
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
