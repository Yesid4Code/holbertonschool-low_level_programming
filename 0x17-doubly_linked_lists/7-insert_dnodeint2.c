#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a node at given position.
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	unsigned int i = 0; /* to scroll through the list. */

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*h == NULL && idx  > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		if (*h == NULL)
			new->next = *h;
		else
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (*h)
	{
       		if ((i + 1) == idx)
		{
			new->n = n; /* data of the new node. */
			new->prev = *h;
			new->next = (*h)->next;
			if ((*h)->next != NULL)
				(*h)->next->prev = new;
			(*h)->next = new;
			return (new);
		}
		*h = (*h)->next;
		i++;
	}
	free(new);
	return(NULL);
}
