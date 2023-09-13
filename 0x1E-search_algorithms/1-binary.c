#include "search_algos.h"
#include "math.h"

/**
 * print_array - function that prints array of given size
 * @array: a pointer to the first element of the array to search in
 * @start_idx: start index
 * @end_idx: end index
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
    int index = recursive_search(array, size, value);
	

    return (index);
}
