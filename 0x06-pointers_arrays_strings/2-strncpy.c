#include "holberton.h"

/**
 **_strncpy - functions that concatenates two strings.
 *@dest: address of a string.
 *@src: address of the second string.
 *@n: limit
 *Return: a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j]; /*overwrite first string with the second one*/
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
