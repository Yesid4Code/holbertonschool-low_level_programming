#include "holberton.h"

/**
 *puts_half - fuction that prints every other character of a string.
 *@str: string that bring a serie of numbers.
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
