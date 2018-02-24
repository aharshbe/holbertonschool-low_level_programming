#include "variadic_functions.h"
/**
 * sum_them_all - prints a name as is
 * @n: name of the person
 *
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list arg_p;

	if (n == 0)
		return (0);

	va_start(arg_p, (int)n);

	while (i < (int)n)
	{
		sum += va_arg(arg_p, int);
		i++;
	}

	va_end(arg_p);

	return (sum);

}
