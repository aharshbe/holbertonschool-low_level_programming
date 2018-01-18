#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	for(; i < 24; i++)
	{

		if(c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
		c++;

	}
	putchar('\n');

	return(0);
}
