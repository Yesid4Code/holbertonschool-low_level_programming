#include "holberton.h"

/**
 *print_line - draws a straight line
 *@n: integer used to draw.
 *Return: n
 */

void print_line(int n)
{
	for (n; n > 0; n--)
		_putchar(95);
	_putchar('\n');
}
