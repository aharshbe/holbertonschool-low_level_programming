#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char c = 'a';

	for(i = 0; i < 24; i++)
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
