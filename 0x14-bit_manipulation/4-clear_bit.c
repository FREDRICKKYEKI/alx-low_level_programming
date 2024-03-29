#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	if (*n & mask)
		*n ^= mask;

	return (1);
}
