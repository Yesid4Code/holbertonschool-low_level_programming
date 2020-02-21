#include "holberton.h"

/**
 *cap_string - functions that capitalizes all words of a string.
 *@p: address of a string.
 *Return: p as a string
 */

char *cap_string(char *p)
{
	int i = 0, j, k;
	char c[13]  = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			  '(', ')', '{', '}'};

	while (p[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		for (k = 0; c[k] != '\0'; k++)
		{
			if (j == 0)
			{
				if (p[j] >= 97 && p[j] <= 122)
					p[j] = p[j] - 32;
			}
			if (p[j] == c[k])
			{
				if (p[j + 1] >= 97 && p[j + 1] <=  122)
					p[j + 1] = p[j + 1] - 32;
			}
		}
	}
	return (p);
}
