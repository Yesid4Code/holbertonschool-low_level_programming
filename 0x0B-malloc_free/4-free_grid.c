#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created.
 *@g: a pointer.
 *@h: a pointer
 */

void free_grid(int **g, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(g[i]);
	free(g);
}
