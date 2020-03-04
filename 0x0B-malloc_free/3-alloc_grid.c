#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Function that return a pointer to a 2 dimensional array.
 * @w: The size of the width.
 * @h: The size of the height.
 *
 * Return: Pointer to an 2 dimensional array.
 */

int **alloc_grid(int w, int h)
{
	int i = 0, j = 0, k;
	int **la;

	if (w <= 0 || h <= 0)
		return (NULL);

	la = malloc(h * sizeof(int *));

	for (i = 0; i < h; i++)
	{
		la[i] = malloc(w * sizeof(int *));
		if (la[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(la[j]);
			free(la);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			la[i][j] = 0;
	}
	return (la);
}
