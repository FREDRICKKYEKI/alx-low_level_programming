#include "lists.h"
/**
 * print_list - prints all the elements in a list.
 * @h: Pointer to the header of the linked list.
 * 
 * Return: number of elements in the list;
*/

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n")
		else
			printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	nelem++;
	}
	return (nelem);
}
