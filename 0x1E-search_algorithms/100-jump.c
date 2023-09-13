#include "search_algos.h"
#include "math.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = (int)sqrt(size);
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[end] < value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = end + sqrt(size);

		if (end > size - 1)
			break;
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
