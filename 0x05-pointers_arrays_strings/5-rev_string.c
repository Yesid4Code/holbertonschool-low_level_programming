#include "holberton.h"

/**
 *rev_string - function that prints a string in reverse
 *@s: pointer that refers a string.
 */

void rev_string(char *s)
{
	int i = 0, j;
	char a;
	while( s[i] != '\0')
		i++;
	j = i - 1;
	for (i = 0; i <  j; i++)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		j--;
	}
	/*_putchar('\n');*/
}
