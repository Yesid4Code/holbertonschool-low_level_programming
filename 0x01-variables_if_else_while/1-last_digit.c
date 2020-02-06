#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main block
 *Return: 0
 */
int main(void)
{
int n, digt;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
digt = n % 10;
if (digt > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, digt);
if (digt == 0)
printf("Last digit of %i is %i and is 0\n", n, digt);
if ((digt < 6) && (digt != 0))
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digt);
return (0);
}
