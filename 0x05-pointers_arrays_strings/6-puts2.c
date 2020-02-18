#include "holberton.h"

/**
 *puts2 - fuction that prints every other character of a string.
 *@str: string that bring a serie of numbers.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
