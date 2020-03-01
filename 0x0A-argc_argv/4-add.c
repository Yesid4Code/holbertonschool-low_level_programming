#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isdigit - determine if the array is numeric.
 * @c: pointer to the array.
 * Return: 1 or 0.
 */

int _isdigit(char *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (isdigit(c[j]) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - Function tha prints arguments it receives.
 * @ac: the size.
 * @n: the array.
 * Return: nothing.
 */

int main(int ac, char *n[])
{
	int sum = 0, i;

	for (i = 1; i < ac; i++)
	{
		if (_isdigit(n[i]))
		{
			sum = sum + atoi(n[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
