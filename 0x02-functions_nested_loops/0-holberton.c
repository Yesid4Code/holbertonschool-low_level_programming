#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
int i;
char hol[9] = "Holberton";/*{H, o, l, b, e, r, t, o, n};*/
for (i = 0; i <= 8; i++)
_putchar(hol[i]);
_putchar('\n');
return (0);
}
