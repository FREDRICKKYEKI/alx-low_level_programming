#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: head of linked list
 * Return: address of the new element, or NULL if it failed.
 */
 listint_t *add_nodeint(listint_t **head, const int n)
 {
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
	{
		printf("\nError!!!");
		return NULL;
	}

	newHead->n = n;
	newHead->next = *head;
	*head = newHead;

	return newHead;
 }
