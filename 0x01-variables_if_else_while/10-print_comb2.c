#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 48;
	int k = 48;
	int i;

	for (i = 0; i < 100; i++)
	{

		putchar(j);
		putchar(k);
		if (k == 57 && j == 57)
		{

		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (k >= 57)
		{
			j++;
		}
		if (k >= 57)
		{
			k = 48;
		}
		else
		{
			k++;
		}

	}

	putchar('\n');
	return (0);
}
