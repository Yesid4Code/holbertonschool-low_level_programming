#include "stdio.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: pointer.
 *@src:  used to copy.
 *@n: number that indicates the repetitions.
 *Return: s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
