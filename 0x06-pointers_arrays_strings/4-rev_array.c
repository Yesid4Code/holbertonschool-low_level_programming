#include "holberton.h"

/**
 **_strcmp - functions that reverse an array of integers.
 *@a: address of a integer.
 *@n: an integer.
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
	}
}
