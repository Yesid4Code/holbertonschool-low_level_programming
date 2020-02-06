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
for (c = 122; c >= 97; c--)
putchar(c);
putchar('\n');
return (0);
}
