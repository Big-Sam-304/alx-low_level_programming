#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to
 * perfom the operation asked by the user.
 *
 * @s: the operator.
 *
 * Return: integer.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 6 && *s != *(ops[i].op))
	{
		i++;
	}

	if (i == 5)
	{
		printf("Error\n");
		return (99);
	}

	return (ops[i].f);
}
