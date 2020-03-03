#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array reserving a space in memory.
 * @size: The size of the Array.
 * @c: String to save it insite of the new Array.
 *
 * Return: Pointer to an Array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *la = malloc(size * sizeof(char)); /*reserve the space of memory*/

	if (size <= 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		la[i] = c;
	}
	return (la);
}
