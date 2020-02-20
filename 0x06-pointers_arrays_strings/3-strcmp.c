#include "holberton.h"

/**
 **_strcmp - functions that compares two strings.
 *@dest: address of a string.
 *@src: address of the second string.
 *Return: a string.
 */

int _strcmp(char *dest, char *src)
{
	int i = 0, j = 0;

	while ((dest[i] != '\0' || src[i] != '\0') && j == 0)
	{
		if (dest[i] != src[i])
		{
			j = (dest[i] - src[i]);
		}
		i++;
	}
	return (j);
}
