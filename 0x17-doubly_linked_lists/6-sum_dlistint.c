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

	if (head->prev != NULL)
		while (head->prev != NULL)
			head = head->prev;
	
	if (head == NULL)
		return (0);
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

