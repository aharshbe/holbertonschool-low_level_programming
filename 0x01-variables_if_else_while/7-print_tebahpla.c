#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 26;
	char c = 'z';
	for(; i > 0; i--)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return(0);
}
