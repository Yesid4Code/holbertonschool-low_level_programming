#include "holberton.h"

/**
 * _print_rev_recursion - print a string in a recursive way in reerse.
 * @s: pointer that references a string.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		i++;
		_print_rev_recursion(s + i);
		_putchar(s[0]);
	}
}
