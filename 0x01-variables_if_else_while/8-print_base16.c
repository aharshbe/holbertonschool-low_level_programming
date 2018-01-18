#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	int j = 48;

	char c = 'a';

	for (i = 0; i < 16; i++)
	{

		if (i > 9)
		{
			putchar(c);
			c++;
		}
		else
		{
			putchar(j);
			j++;
		}
	}

	putchar('\n');

	return (0);
}
