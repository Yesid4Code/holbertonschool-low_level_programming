#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10 times
 *Return: always 0
 */
void print_alphabet_x10(void)
{
int i = 0, j = 0;
while (i < 10)
{
for (j = 97; j <= 122; j++)
_putchar(j);
i++;
_putchar('\n');
}
return (0);
}
