#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head
 * @index: index of node to be deleted
 *
 * Return: : 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int i;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	i = 0;

	while (head1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}

	return (-1);
}
