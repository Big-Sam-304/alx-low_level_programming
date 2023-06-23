#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - finds the 'right' operator
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to
 * the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	if (i < 5)
		return (ops[i].f);

	return (NULL);
}
