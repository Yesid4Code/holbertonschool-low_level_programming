#include "holberton.h"

/**
 * factorial - find the factor number of any number.
 * @n: the number to calculate their factorial.
 * Return: the factorial.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
