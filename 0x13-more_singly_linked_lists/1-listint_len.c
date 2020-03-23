#include "lists.h"

/**
 * listint_len - function that count number of nodes of a list.
 * @h: the address to the header of a list.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
        int i = 0;

        while (h != NULL)
        {
                i++;
                h = h->next;
        }
        return (i);
}
