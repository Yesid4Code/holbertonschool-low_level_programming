#include "holberton.h"

/**
 *string_toupper - functions that change an array of lowercase to uppercase.
 *@p: address of a string.
 *Return: p as a string
 */

char *string_toupper(char *p)
{
	int i = 0, j = 0;

	while (p[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if ((p[j] >= 97) && (p[j] <= 122))
			p[j] = p[j] - 32;
	}
	return (p);
}
