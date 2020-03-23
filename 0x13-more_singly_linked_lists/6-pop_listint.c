#include "lists.h"

/**
 * pop_listint - function that deletes the head of a list ant return its value.
 * @head: pointer to the first element of the list.
 * Return: the value of the node deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *nhead;
	int x = 0;

	if (*head == NULL)
		return (0);
	nhead = *head;
	x = nhead->n;
	*head = nhead->next;
	free(nhead);

	return (x);
}
