#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beggining of a list.
 * @head: pointer to the header of the list.
 * @n: number to add in the header node of the list.
 * Return: pointer to the header list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lead;

	lead = malloc(sizeof(listint_t));
	if (lead == NULL)
		return (NULL);

	lead->n = n;
	lead->next = *head;
	*head = lead;

	return (lead); /*the new header*/
}
