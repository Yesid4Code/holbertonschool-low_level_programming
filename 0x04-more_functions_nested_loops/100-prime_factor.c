#include <stdio.h>

/**
 * main - print largest prime
 * Return: 0
 */

int main(void)
{
	long n;
	long d;

	n = 612852475143;

	for (d = 2; d < n; d++)
	{
		if (n % d == 0)
		{
			n /= d;
		}
	}
	printf("%ld\n", n);
	return (0);
}
