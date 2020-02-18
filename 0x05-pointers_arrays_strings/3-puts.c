#include "holberton.h"

/**
 *_puts - fuction that print a string.
 *@str: punter that reference a string.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
