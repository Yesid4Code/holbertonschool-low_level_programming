#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees the memory.
 * @d: pointer to the address.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
