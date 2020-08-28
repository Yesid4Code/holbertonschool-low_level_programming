#include "search_algos.h"

/**
 * linear_skip - search for a value - Jump search algorithm
 * @list:  Pointer to the first element of the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node of the list where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list, *temp = NULL;

	if (!list)
		return (NULL);
	while (head)
	{
		if (head->express)
		{
			temp = head->express;
			if (temp->n >= value)
				break;
			head = temp;
			printf("Value checked at index [%lu] = [%d]\n", temp->index, head->n);
		}
		else
			head = head->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", head->index, temp->index);
	while (head)
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
