#include "variadic_functions.h"
/**
 * print_char - function that prints a character.
 * @car: The character to be printed.
 */
void print_char(va_list car)
{
	printf("%c", va_arg(car, int));
}

/**
 * print_integer - function that prints a number.
 * @num: Number to be printed.
 */
void print_integer(va_list num)
{
	printf("%d", va_arg(num, int));
}

/**
 * print_float - function that prints a float number.
 * @flo: Number to be printed.
 */

void print_float(va_list flo)
{
	printf("%f", va_arg(flo, double));
}

/**
 * print_string - function that prints a string.
 * @str: String to be printed.
 */

void print_string(va_list str)
{
	char *chak = va_arg(str, char*);

	if (chak != NULL)
		printf("%s", chak);
	else
		printf("(nil)");
}

/**
 * print_all - function that prints everything.
 * @format: a list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list list;
	char *sepa = "";

	lot wprint[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (wprint[j].op != NULL)
		{
			if (format[i] == wprint[j].op[0])
			{
				printf("%s", sepa);
				wprint[j].f(list);
				break;
			}
			j++;
		}
		i++;
		sepa = ", ";
	}
	va_end(list);
	printf("\n");
}
