#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main block.
 *Description: print reverse alphabet.
 *Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
