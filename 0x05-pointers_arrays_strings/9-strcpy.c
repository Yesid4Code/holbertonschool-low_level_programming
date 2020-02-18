#include "holberton.h"

/**
 **_strcpy - function that prints a copy of a string using pointers
 *@dest: the directions goal.
 *@src: brint the string to copy with pointers.
 *Return: xxx
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	j = i;
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
