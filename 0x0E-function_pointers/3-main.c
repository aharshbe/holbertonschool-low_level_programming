#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a name as is
 * @argc: name of the person
 * @argv: name of the person
 *
 * Return: 0 is success or 98 if fail.
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	char *op;
	char argvchar;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op = argv[2];
		argvchar = argv[2][0];

		if ((argvchar == '/' || argvchar == '*' ||
			argvchar == '%' || argvchar == '-' || argvchar == '+')
			&& argv[2][1] == '\0' && get_op_func(op) != NULL)
		{
			if ((argvchar == '/' || argvchar == '%') && (num2 == 0))
			{
				printf("Error\n");
				return (100);
			}
			else
			{
				result = get_op_func(op)(num1, num2);
				printf("%d\n", result);
			}
		}
		else
		{
			printf("Error\n");
			return (99);
		}
	}
	return (0);
}
