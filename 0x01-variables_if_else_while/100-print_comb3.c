#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;
	int p = 1; int q = 2; int r = 3; int s = 4; int t = 5; int u = 6;
	int v = 7;

	for (i = 0, k = 48; i < 10; i++)
	{
		for (j = 0, m = 48; j < 10; j++)
		{
			if (k != m && m != 48 && k != 57 && k != m + p
			    && k != m + q && k != m + r && k != m + s &&
			    k != m + t && k != m + u && k != m + v)
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
