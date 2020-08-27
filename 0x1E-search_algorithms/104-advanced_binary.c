#include "search_algos.h"

/**
 * advanced_binary - searches for a value
 * Binary search algorithm with recursion.
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i = 0, m = 0;

	if (array && size > 0)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= high)
				printf(", ");
		}
		printf("\n");
		m = (size - 1) / 2;
		if (array[m] == value && array[m - 1] != value)
			return (m);
		if (value <= array[m])
			return (advanced_binary(array, m + 1, value));
		else if (value > array[m])
			return (advanced_binary(array + m + 1, (size - m - 1), value));
	}
	return (-1);
}
