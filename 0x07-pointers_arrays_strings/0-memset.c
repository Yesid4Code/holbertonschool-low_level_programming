#include "stdio.h"

/**
 *_memset - function that fills memory wit a constant byte.
 *@s: pointer.
 *@b: constant used to fill @s.
 *@n: number that indicates the repetitions.
 *Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
