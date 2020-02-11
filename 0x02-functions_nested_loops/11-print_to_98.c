#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints all numbers from n to 98
 *@n: number received.
 *Return: nothing.
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (n; n <= 98; n++)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
printf("\n");
}
else
{
for (n; n >= 98; n--)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
printf("\n");
}
}
