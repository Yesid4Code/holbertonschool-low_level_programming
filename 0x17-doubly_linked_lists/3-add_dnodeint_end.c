#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the of a list.
 * @head: pointer to the list.
 * @n: content of the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		new->prev = NULL;
	else
	{
		while ((*head)->next != NULL)
			*head = *head->next;
		new->prev = *head;
		(*head)->next = new;
	}
	return (new);
}
