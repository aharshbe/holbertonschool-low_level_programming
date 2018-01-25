#include "holberton.h"
/**
 * print_diagonal - Short description, single line
 * @n: Description of parameter c
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;
	int k = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		k++;
	}
}
