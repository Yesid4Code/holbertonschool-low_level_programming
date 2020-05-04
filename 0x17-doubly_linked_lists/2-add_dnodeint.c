#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the begging of a list.
 * @head: header of the list.
 * @n: number to insert in the list.
 *
 * Return: the addres of new node, or NULL if if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
