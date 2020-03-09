#include "dog.h"

/**
 * init_dog - initialize a variable of type structure
 * @d: the addres of the a variable of type structure dog.
 * @name: the name of the new dog.
 * @age: the age of the new dog.
 * @owner: the owner of the new dog.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
