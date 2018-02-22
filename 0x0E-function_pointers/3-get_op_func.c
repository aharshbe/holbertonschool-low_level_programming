#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - prints a name as is
 * @s: name of the person
 *
 * Return: Nothing.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0, size = 0;

	op_t ops[] = { {"+", op_add}, {"-", op_sub},
	{"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL} };

	size = sizeof(ops) / sizeof(op_t);

	while (i < size)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
