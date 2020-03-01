#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Function tha prints arguments it receives.
 * @ac: the size.
 * @n: the array.
 * Return: nothing.
 */

int main(int ac, char *n[])
{
	int num = 0, i = 0;

	if (ac == 3)
	{
		num = atoi(n[i + 1]) * atoi(n[i + 2]);
		printf("%d\n", num);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
