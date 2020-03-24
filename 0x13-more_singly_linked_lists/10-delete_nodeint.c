#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node in an specific index.
 * @head: pointer to the header of the list.
 * @index: the node to be deleted.
 *
 * Return: 1 if it succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nnext = NULL;
	listint_t *tmp = NULL;

	tmp = *head;
	if (i == index)
	{
		nnext = tmp->next;
		tmp = nnext;
		return (1);
	}
	while (tmp != NULL)
	{
		if ((i + 1) == index)
		{
			nnext = tmp->next;
			tmp = nnext;
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
