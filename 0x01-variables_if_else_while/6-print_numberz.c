#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	int j = 48;

	for(i = 0; i < 10; i++, j++)
	{
		putchar(j);
	}
	
	putchar('\n');
	
	return (0);
}
