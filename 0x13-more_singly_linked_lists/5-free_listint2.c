 #include "lists.h"

 /**
 * free_listint2 - frees a listint_t
 * @head: pointer to head of linked list
 * Returns: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

	if (head == NULL || *head == NULL)
	return;

	curr = *head;

	while (curr != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}

	*head = NULL;
}
