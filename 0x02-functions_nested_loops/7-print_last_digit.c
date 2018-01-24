#include "holberton.h"

/**
 * print_last_digit - Short description, single line
 * @n: Description of parameter n
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n + (-n * 2)) % 10;
		return (n);
	}
	else
	{
		n = n % 10;
		return (n);
	}
}
