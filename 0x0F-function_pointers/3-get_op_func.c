#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects the correct function
 * @s: the operator passed to the function
 * Return: nothing
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
	int a;

	a = 0;
	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
