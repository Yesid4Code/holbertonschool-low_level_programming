#include <stdio.h>

/**
 *print_array - function that prints elements of an array
 *@a: a pointer.
 *@n: an integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i > 0) && (i < n))
			printf(", ");
		printf("%i", a[i]);
	}
	printf("\n");
}
