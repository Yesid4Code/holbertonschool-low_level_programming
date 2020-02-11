#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number.
 *@a: number to read.
 *Return: x.
 */
int print_last_digit(int a)
{
char x;
x = a % 10;
if (x < 0)
x = x * -1;
_putchar(x + '0');
return (x);
}
