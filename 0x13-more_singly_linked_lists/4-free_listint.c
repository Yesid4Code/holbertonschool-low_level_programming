#include "lists.h"

/**
 * free_listint - function that frees a list.
 * @head: pointer to the first element of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *aux, *auxn;

	aux = head;
	while (aux != NULL)
	{
		auxn = aux->next;
		free(aux);
		aux = auxn;
	}
}
