#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 48;
	for(; i < 10; i++, j++)
	{
		putchar(j);
	}
	putchar('\n');
	return(0);
}
