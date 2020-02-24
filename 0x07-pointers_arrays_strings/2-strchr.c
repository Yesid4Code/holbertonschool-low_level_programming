#include "holberton.h"

/**
 *_strchr - functions that locates a character in a string.
 *@s: string where should locate the character.
 *@c: The character.
 *Return: a pointer.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		*s++;
		if (s[i] == c)
		{
			return (s);
		}
	}
	return ('\0');
}
