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
	/*printf("Value checked array[{}] = [{}]", left, array[left]);*/
	while (pivot < size && array[left] < value)
	{
		printf("Value checked array[{%lu}] = [{%d}]\n", left, array[left]);
		if (array[pivot] >= value)
			break;
		left = pivot + 1;
		pivot = pivot + sqrt(size);
	}
	if (pivot >= size)
		return (-1);
	printf("Value found between indexes [{%lu}] and [{%lu}]\n", left, pivot);
	while (left < size)
	{
		printf("Value checked array[{%lu}] = [{%d}]", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}


	return (-1);
}
