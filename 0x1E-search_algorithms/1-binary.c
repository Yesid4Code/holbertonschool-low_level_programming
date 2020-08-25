#include "search_algos.h"

/**
 * binary_search - searches for a value - Binary search algorithm.
 * @array: Pointer to the firs element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search.
 *
 * Return: The index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m = 0;

	if (array)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			printf("%d", array[i]);
			if (i + 1 != size)
				printf(",");
		}
		printf("\n");
		m = size / 2;
		if (array[m] == value)
			return (m);
		if (value < array[m] && (m - 1) >= 0)
		{
			return (binary_search((array), (m - 1), value));
		}
		if (m + 1 <= size)
			return (binary_search((array + m), (size - m - 1), value));
	}
	return (-1);
}
