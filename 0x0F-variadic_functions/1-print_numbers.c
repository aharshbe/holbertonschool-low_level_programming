#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints a name as is
 * @separator: name of the person
 * @n: name of the person
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list p;

	if (n == 0)
		return;

	va_start(p, (int)n);

	while (i < (int)n)
	{
		if (i == (int)n - 1)
		{
			printf("%d", va_arg(p, int));
		}
		else
		{
			if (separator != NULL)
			{
				printf("%d", va_arg(p, int));
				printf("%s", separator);
			}
			else
			{
				printf("%d", va_arg(p, int));
			}
		}
		i++;
	}
	printf("\n");

	va_end(p);
}
