#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to the header of the list.
 * @n: number to add in the new node.
 * Return: pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *tmp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
		*head = tail;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = tail;
	}
	return (tail);
}
