#include <stdio.h>
#include "holberton.h"

/**
 * main - Function tha prints arguments it receives.
 * @ac: the size.
 * @av: the array.
 * Return: nothing.
 */

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
