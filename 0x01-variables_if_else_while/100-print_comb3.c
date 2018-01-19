#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 49;
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = k; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{


			}
			else
			{

				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
