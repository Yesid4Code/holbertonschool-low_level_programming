#include "holberton.h"

/**
 *leet - encode a string.
 *@p: pointer that bring a string.
 *Return: a string
 */

char *leet(char *p)
{
	int i, j;
	char min[] = "aeotl", may[] = "AEOTL", num[] = "43071";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; min[j] != '\0' && may[j] != '\0'; j++)
		{
			if (p[i] == min[j] || p[i] == may[j])
				p[i] = num[j];
		}
	}
	return (p);
}
