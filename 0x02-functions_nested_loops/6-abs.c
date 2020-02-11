#include "holberton.h"
/**
 *_abs - print the absolute value of a number
 *@a: number to know its absolute value.
 *Return: always 0
 */
int _abs(int a)
{
int x;
if (a < 0)
{
x = a * -1;
}
else
{
x = a;
}
return (x);
}
