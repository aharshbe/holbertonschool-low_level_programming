#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Short description, single line
 * @n: Description of parameter n
 * Return: 0
 */
int print_last_digit(int n)
{
	int tmp;

	if (n >= 0)
	{
		tmp = n % 10;
		tmp += 48;
		_putchar(tmp);
	}

	if (n < 0)
	{
		tmp = (n + (-n * 2)) % 10;
		tmp += 48;
		_putchar(tmp);
	}

	return (4);

}
