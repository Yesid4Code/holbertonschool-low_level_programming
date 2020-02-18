#include "holberton.h"

/**
 *_strlen - count the number of elements of a string.
 *@s: a punter that reference a string.
 *Return: counter: the number of the characters of the string.
 */

int _strlen(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
