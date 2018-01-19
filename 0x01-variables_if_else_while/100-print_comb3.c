#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 0, k = 48; i < 10; i++)
	{
		for (j = 0, m = 48; j < 10; j++)
		{
			if (k != m && m != 48 && k != 57 && k != m + 1
			    && k != m + 2 && k != m + 3 && k != m + 4 &&
			    k != m + 5 && k != m + 6 && k != m + 7)
			{
				putchar(k);
				putchar(m);
				if (k == 56 && m == 57)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
			if (m > 57)
			{
				m = 48;
			}
		}
		k++;
		if (k > 57)
		{
			k = 50;
		}
	}
	putchar('\n');
	return (0);
}
