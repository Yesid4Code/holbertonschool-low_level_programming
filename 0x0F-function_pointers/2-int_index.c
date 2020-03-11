#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array with the content.
 * @size: the size of the array.
 * @cmp: the pointer function.
 * Return: -1 if not matchs coincidences or the index if found it.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
			if (cmp(array[i]) != 0)
				return (i);
			}
		}
	}
	return (-1);
}
