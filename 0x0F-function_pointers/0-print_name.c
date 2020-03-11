#include "function_pointers.h"

/**
 * print_name - function that send a string to be printing in other function.
 * @name: The string received.
 * @f: pointer to a function to send the string with the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
