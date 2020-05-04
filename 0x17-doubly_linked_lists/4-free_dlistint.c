#include "lists.h"

/**
 * free_dlistint - functions that free a list.
 * @head: pointer to the header of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while(head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
