#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i < (n - 1)) && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");

}
