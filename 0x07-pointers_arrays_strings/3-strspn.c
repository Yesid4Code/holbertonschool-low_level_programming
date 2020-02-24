#include "holberton.h"

/**
 *_strspn - functions that locates a character in a string.
 *@s: string where should locate the character.
 *@ac: The character.
 *Return: a pointer.
 */

unsigned int _strspn(char *s, char *ac)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; ac[j]; j++)
		{
			if (s[i] == ac[j])
			{
				c++;
				break;
			}
		}
		if (c < i)
			break;
	}
	return (c);
}
