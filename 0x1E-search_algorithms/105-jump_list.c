#include "search_algos.h"

/**
 * jump_search - search for a value - Jump search algorithm
 * @array: Pointer to the first element of the array.
 * @size:  Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, jump = sqrt(size);
	int *head = *list, *temp = NULL;

	if (!list)
		return (NULL);
	while (head->next)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		temp = head;
		while (temp->next && temp->index <= jump)
			temp = temp->next;
		if (!temp || temp->value >= value)
			break;
		head = temp->next;

		}
		idx = jump;
		jump = jump + sqrt(size);

	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx, jump);
	while (idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
