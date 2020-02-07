#include <stdio.h>
/**
 *main - main block.
 *Return:0
 */
int main(void)
{
int c, d;
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
putchar(c);
putchar(d);
if ((c < 57) || (d < 57))
{
putchar(',');
putchar(' ');
}
}
d = 48;
}
putchar('\n');
return (0);
}
