#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints a name as is
 * @separator: name of the person
 * @n: name of the person
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char *s;
	int i = 0;

	va_start(p, (int)n);

	if (n == 0)
		return;

	while (i < (int)n)
	{
		s = va_arg(p, char*);

		if (i == (int)n - 1)
		{
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s\n", s);
		}
		else
		{
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (separator != NULL)
				printf("%s", separator);
		}

		i++;
	}
	va_end(p);
}
