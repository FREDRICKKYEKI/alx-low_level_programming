#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of linked list
 *
 * Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}

