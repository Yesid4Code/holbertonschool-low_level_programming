#include "holberton.h"

/**
 *_strstr - functions that locates a substring.
 *@s: pointer that bring a string.
 *@ac: pointer that bring a substring.
 *Return: a pointer.
 */

char *_strstr(char *s, char *ac)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = i;
		for (j = 0; (s[i] == ac[j]) &&
			     (s[i] != '\0') && (ac[j] != '\0'); j++, i++)
			continue;
		if (ac[j] == '\0')
			return (s += c);
	}
	return (0);
}
