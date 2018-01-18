#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	char c = 'z';

	for (i = 26; i > 0; i--)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
