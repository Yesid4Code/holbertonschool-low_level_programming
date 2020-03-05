#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 * @m: The minimum number.
 * @M: The maximun number.
 *
 * Return: a pointer to a new array.
 */

int *array_range(int m, int M)
{
	int i, s, *p;

	if (m > M)
		return (NULL);
	s = M - m + 1;
	p = malloc(s * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0; i < s; i++, m++)
		p[i] = m;
	return (p);
}
