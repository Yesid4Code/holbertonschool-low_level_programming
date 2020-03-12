#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: the number of arguments.
 * @argv: the array conteined in each position.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		printf("%d\n", get_op_func(argv[2])(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
