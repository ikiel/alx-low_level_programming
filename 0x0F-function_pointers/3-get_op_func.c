#include "3-calc.h"

/**
 * get_op_func - select operation
 * @s: operation asked by user
 *
 * Return: pointer to function, NULL on error
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
	int i = 0;

	while (ops[i].symbol != NULL)
	{
		if (strcmp(ops[i].symbol, s) == 0)
		{
			return (ops[i].operation);
		}
		i++;
	}

	return (NULL);
}
