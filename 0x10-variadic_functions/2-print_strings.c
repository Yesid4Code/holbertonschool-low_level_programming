#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
