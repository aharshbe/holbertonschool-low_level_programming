#include "holberton.h"
/**
 * jack_bauer - print times
 */
void jack_bauer(void)
{
	int i, j, k, m, c;

	c = 10;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j < c; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (i == 1 && j == 9)
					{
						c = 4;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
