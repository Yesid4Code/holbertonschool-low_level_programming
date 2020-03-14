#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: constant variable.
 *
 * Return: the sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int summ = 0;
	unsigned int i;

	va_list sum;

	va_start(sum, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		summ += va_arg(summ, int);
	va_end(sum);
	return (summ);
}
