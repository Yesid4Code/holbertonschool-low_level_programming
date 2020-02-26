#include "holberton.h"

/**
 * _puts_recursion - print a string in a recursive way.
 * @s: pointer that reference a string.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
