#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array.
 * @nm: Number of elemens.
 * @sz: Size of each elemens.
 *
 * Return: a pointer.
 */
void *_calloc(unsigned int nm, unsigned int sz)
{
	unsigned int i;
	char *p;

	if (nm == 0 || sz == 0)
		return (NULL);
	p = malloc(sz * nm);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nm; i++)
		p[i] = 0;
	return (p);
}
