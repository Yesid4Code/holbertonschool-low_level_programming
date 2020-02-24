#include "holberton.h"

/**
 *_strpbrk - functions that searches a string.
 *@s: string where should locate the character.
 *@ac: The character.
 *Return: a pointer.
 */

char *_strpbrk(char *s, char *ac)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ac[j] != '\0'; j++)
		{
			if (s[i] == ac[j])
			{
				s += i;
				c++;
				return (s);
			}
		}
	}
	if (c != 0)
		return (s);
	s = 0;
	return (s);
}
