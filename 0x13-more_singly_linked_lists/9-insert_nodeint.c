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
	listint_t *nnode = NULL;
	listint_t *nnext = NULL;
	listint_t *tmp = NULL;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	tmp = *head;
	nnode->n = n;
	if (i == idx)
	{
		nnode->next = tmp;
		*head = nnode;
		return (nnode);
	}
	while (tmp != NULL)
	{
		if ((i + 1) == idx)
		{
			nnext = tmp->next;
			nnode->next = nnext;
			tmp->next = nnode;
			return (nnode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
