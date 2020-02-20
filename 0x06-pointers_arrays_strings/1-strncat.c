#include "holberton.h"

/**
 **_strncat - functions that concatenates two strings.
 *@dest: address of a string.
 *@src: address of the second string.
 *@n: limit
 *Return: a string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
