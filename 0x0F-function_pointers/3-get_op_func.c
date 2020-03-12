#include "3-calc.h"

/**
 * get_op_func - the kind of operation selected.
 * @s: operator passed as an argument
 *
 * Return: a pointer to the function that to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *ops[i].op && s[1] == 0)
		{
			return(ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
