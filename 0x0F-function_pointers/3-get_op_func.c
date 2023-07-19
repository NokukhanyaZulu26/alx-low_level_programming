#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - pointer to right op function
 * @s: string
 * Return: right function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (k < 5)
	{
		if (s && s[0] == ops[k].op[0] && !s[1])
			return (ops[k].f);
		k++;
	}
	return (NULL);
}
