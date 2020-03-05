#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate two string using malloc.
 * @s1: string 1.
 * @s2: string 2.
 * @n: the number of bytes.
 * Return: a pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, k;
	unsigned int m, j = 0;
	char *p;

	if (s1)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2)
	{
		while (s2[j] != '\0')
			j++;
		j++;
	}
	if (n >= j)
		p = malloc((i + j) * sizeof(char));
	else
		p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (m = 0; (m < n && m < j); m++, k++)
		p[k] = s2[m];
	p[k] = '\0';
	return (p);
}
