#include "holberton.h"

/**
 *print_diagonal - print a diagonal line.
 *@n: number of times the character '\' should be printed.
 *Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (n > 1)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
