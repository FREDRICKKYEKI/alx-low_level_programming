#include "search_algos.h"

/**
 * print_array - function that prints array of given size
 * @array: a pointer to the first element of the array to search in
 * @size:  size of array
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * recursive_search - function that searches for a value in a sorted
 * array recursively
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if none
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_search(array, mid, value));

	mid++;

	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if none
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, next;
	int index;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i *= 2;
	}

	next = (i >= size) ? (size - 1) : i;

	i /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)i, (int)next);

	index = binary_search(array + i, (next + 1) - i, value);

	if (index >= 0)
		index += i;

	return (index);
}
