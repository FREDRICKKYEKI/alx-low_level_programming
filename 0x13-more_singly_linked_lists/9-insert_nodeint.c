#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node
 * at a given index of a listint_t.
 * @head: head of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: data(n) of listint_t list.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *headcpy;
	int count;

	count = 0;
	headcpy = *head;

	if (idx != 0)
	{
		while (headcpy != NULL && count < (idx - 1))
		{
			headcpy = headcpy->next;
			count++;
		}
	}
	if (headcpy == NULL && idx != 0)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;

	if (newNode == NULL  && idx != 0)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = headcpy->next;
		headcpy->next = newNode;
	}

	return (newNode);
}
