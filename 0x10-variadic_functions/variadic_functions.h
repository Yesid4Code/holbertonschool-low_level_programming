#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listoftype - Struct listoftype.
 * @op: The operator.
 * @f:  The function associated.
 */
typedef struct listoftype
{
	char *op;
	void (*f)();
} lot;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
