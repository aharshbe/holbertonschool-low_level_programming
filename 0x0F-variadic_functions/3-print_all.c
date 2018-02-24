#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - prints a name as is
 * @p: list
 *
 * Return: Nothing.
 */
void print_char(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
 * print_int - prints a name as is
 * @p: list
 *
 * Return: Nothing.
 */
void print_int(va_list p)
{
	printf("%d", va_arg(p, int));
}
/**
 * print_float - prints a name as is
 * @p: list
 *
 * Return: Nothing.
 */
void print_float(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 * print_string - prints a name as is
 * @p: list
 *
 * Return: Nothing.
 */
void print_string(va_list p)
{
	char *s = va_arg(p, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints a name as is
 * @format: name of the person
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list p;
	form forms[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0, j = 0;
	char *non_sep = "", *sep = ", ";

	va_start(p, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (forms[j].type != '\0')
		{
			if (forms[j].type == format[i])
			{
				printf("%s", non_sep);
				forms[j].p(p);
				non_sep = sep;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(p);
}
