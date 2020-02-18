#include "holberton.h"

/**
 *rev_string - function that prints a string in reverse
 *@s: pointer that refers a string.
 */

void rev_string(char *s)
{
	int i, j = 8; 
	char a;

	for (i = 0; i <5; i++)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		j--;
	}
	/*_putchar('\n');*/
}
