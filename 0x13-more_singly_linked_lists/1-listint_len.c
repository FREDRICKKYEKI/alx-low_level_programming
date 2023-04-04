#include "lists.h"
 /**
  * listint_len - prints all elements of listint_t
  * @h: head of linked list
  * Return: number of elements.
  *
  */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
