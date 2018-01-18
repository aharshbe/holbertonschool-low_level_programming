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

	for(; i < 26; i++)
	{

		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
