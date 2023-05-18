#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * in a doubly linked list
 * @h: pointer to head of list
 * Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
