#include <stdlib.h>
#include <time.h>
/**
 *main - main block
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%i positive\n", n);
if (n == 0)
printf("%i is cero\n", n);
if (n < 0)
printf("%i is negativo\n", n);
return (0);
}
