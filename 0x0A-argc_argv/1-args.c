#include <stdio.h>

/**
 * main - Function tha prints the number of arguments.
 * @ac: the size.
 * @av: the array.
 * Return: nothing.
 */

int main(int ac, char *av[])
{
	(void) ac;
	printf("%d\n", (ac - 1));
	return (0);
}
