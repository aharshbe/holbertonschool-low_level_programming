#include "holberton.h"
/**
 * times_table - Short description, single line
 * Return: 0
 */
void times_table(void)
{
	int i, j, k;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			k = j * i;
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k = k % 10 + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
