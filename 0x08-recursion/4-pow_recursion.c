#include "holberton.h"

/**
 * _pow_recursion - calculate the power of a number.
 * @x: the number to calculate their power.
 * @y: the reised number;
 * Return: the x number reised.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
