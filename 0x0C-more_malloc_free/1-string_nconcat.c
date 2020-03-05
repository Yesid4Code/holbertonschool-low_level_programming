#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strlen -  returns the length of a string.
 *@s: char
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - Concatenate two string using malloc.
 * @s1: string 1.
 * @s2: string 2.
 * @n: the number of bytes.
 * Return: a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, k, sz;
	unsigned int m, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2) + 1;

	if (n >= j)
		n = j;
	sz = i + j;
	p = malloc(sz * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (m = 0; m < n; m++, k++)
		p[k] = s2[m];
	p[k] = '\0';
	return (p);
}
