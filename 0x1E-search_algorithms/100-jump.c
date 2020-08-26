#include "search_algos.h"

/**
 * jump_search - search for a value - Jump search algorithm
 * @array: Pointer to the first element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, pivot = sqrt(size); /* pivot = jump */

	if (!array)
		return (-1);
	while (left < size)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[pivot] >= value || pivot >= size)
			break;
		left = pivot;
		pivot = pivot + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, pivot);
	if (pivot >= size)
		return (-1);
	while (left < size)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}


	return (-1);
}
