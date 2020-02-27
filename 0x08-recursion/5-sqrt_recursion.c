#include "holberton.h"

/**
 * _squareto - auxiliar function used to find the square root of a number
 * @n: number to calculate their natural square root.
 * @x: number used to find a square root by power himself.
 * Return: the square of a number.
 */

int _squareto(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) < n)
		return (_squareto(n, (x + 1)));
	return (-8);
}

/**
 * _sqrt_recursion - calculate the natural square root of a number.
 * @n: the number to calculate their natural square root.
 * Return: the x number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_squareto(n, 0));
}
