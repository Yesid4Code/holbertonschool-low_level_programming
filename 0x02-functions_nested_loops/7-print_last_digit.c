#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number.
 *@a: number to read.
 *Return: x.
 */
int print_last_digit(int a)
{
char x;
if (a < 0)
a = a * -1;
x = a % 10;
_putchar(x + '0');
return (x);
}
