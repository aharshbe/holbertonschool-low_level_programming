#include "holberton.h"
/**
 * print_most_numbers - Short description, single line
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{

		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
