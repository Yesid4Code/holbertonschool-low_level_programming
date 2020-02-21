#include "holberton.h"

/**
 *rot13 - encode a string.
 *@p: pointer that bring a string.
 *Return: a string encripted
 */

char *rot13(char *p)
{
	int i, j;
	char ord[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char des[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; ord[j] != '\0'; j++)
		{
			if (p[i] == ord[j])
			{
				p[i] = des[j];
				break;
			}
		}
	}
	return (p);
}
