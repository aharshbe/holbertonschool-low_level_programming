#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, outer;

	for (outer = 0; outer < 10; outer++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
	_putchar('\n');
	}
}
