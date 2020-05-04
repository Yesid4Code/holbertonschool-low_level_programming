#include "lists.h"

/**
 * print_dlistint - function that print the content of a list.
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
