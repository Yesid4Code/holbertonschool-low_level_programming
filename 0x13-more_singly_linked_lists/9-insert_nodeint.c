#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node in an index.
 * @head: pointer to the header of the list.
 * @idx: index where the new node should be added.
 * @n: xxx
 *
 * Return: the address of the new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nnode;
	listint_t *nnext;
	listint_t *tmp;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	tmp = *head;
	nnode->n = n;
	while (tmp != NULL)
	{
		if (i == idx)
		{
			nnode->next = tmp;
			*head = nnode;
			return (nnode);
		}
		if ((i + 1) == idx)
		{
			nnext = tmp->next;
			tmp->next = nnode;
			nnode->n = n;
			nnode->next = nnext;
			return (nnode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
