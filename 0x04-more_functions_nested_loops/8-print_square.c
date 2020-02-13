#include "holberton.h"

/**
 *print_square - printing a character
 *@n: variable to use
 */

void print_square(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
			_putchar(35);
		_putchar('\n');
	}

}
