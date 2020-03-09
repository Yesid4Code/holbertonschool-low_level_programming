#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct.
 * @d: the addres of the a variable of type structure dog.
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			(*d).name = "(nil)";
		if (!(*d).owner)
			(*d).owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       (*d).name, (*d).age, (*d).owner);
	}
}
