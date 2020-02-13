#include "holberton.h"

/**
 * print_triangle - print a triangle
 *@n: is a variable to use
 */

void print_triangle(int n)
{
	int i, j, k, l, m;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			m = n - i;
			for (j = 0; j < n; j++)
			{
				if (j < m)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
