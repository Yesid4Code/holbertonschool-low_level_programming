#include "lists.h"

/**
 * dlistint_len - function that count the number of nodes in a list.
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
