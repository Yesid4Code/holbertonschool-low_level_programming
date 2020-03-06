#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @p: adress of a memory block.
 * @os: The size of the old block of memory.
 * @ns: The nuew size of the new block of memory.
 *
 * Return: The pointer to reallocate memory.
 */

void *_realloc(void *p, unsigned int os, unsigned int ns)
{
	int i;
	char *op = p, *np;

	if (ns == os)
		return (op);
	if (op == NULL)
		return (malloc(ns));
	if (ns == 0)
	{
		free(p);
		return (NULL);
	}
	np = malloc(ns);
	if (!np)
		return (NULL);
	for (i = 0; i < os && i < ns; i++)
		np[i] = op[i];
	free(op);
	return (np);
}
