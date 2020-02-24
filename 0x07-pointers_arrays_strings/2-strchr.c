#include "holberton.h"

/**
 *_strchr - functions that locates a character in a string.
 *@s: string where should locate the character.
 *@c: The character.
 *Return: a pointer.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	
	return (s);
}
