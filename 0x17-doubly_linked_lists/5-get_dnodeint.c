#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth node of a list.
 * @head: pointer to the list.
 * @index: the nth index.
 *
 * Return: pointer to the nth node, NULL if nth doesn't exit.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0; /* Index to go through the list */

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
