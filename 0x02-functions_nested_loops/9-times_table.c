#include "holberton.h"

/**
 *times_table - print table 9 times
 *Return: nothing
 */

void times_table(void)
{
int i, j, y, x, z, m;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
y = i * j;
m = i * (j + 1);
if (y > 9)
{
x = y / 10;
z = y % 10;
_putchar(x + '0');
_putchar(z + '0');
}
else
{
_putchar(y + '0');
}
if ((j < 9) && (y < 10) && (m < 10))
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if ((j < 9) && (m > 9))
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
