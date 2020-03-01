#include <stdio.h>

/**
 * main - functions that prints their own name.
 * @ac: the size.
 * @av: array.
 * Return: an empty value.
 */

int main(int ac, char *av[])
{
	(void) ac;
	printf("%s \n", av[0]);
	return (0);
}
