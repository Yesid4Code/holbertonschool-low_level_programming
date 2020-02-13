#include "holberton.h"

/**
 *more_numbers - print 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 1; k <= 10; k++)
	{
		for (i = 48; i < 50; i++)
		{
			for (j = 48; j < 58; j++)
			{
				if (i == 49)
					_putchar(i);
				_putchar(j);
				if (i == 49 && j == 52)
					j = 1000000;
			}
		}
		_putchar('\n');
	}
}
