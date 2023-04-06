#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long integer to extract the bit from
 * @index: the index of the bit to extract, starting from 0
 *
 * Return: the value of the bit at index
 * index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0 && index < 64)
		return (0);

	for (count = 0; count <= 63; n >>= 1, count++)
	{
		if (index == count)
		{
			return (n & 1);
		}
	}

	return (-1);
}
