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

	for(i = 0; i < 10; i++)
	{
		if(j == 57){

			putchar(j);

		}
		else
		{
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	return (0);
}
