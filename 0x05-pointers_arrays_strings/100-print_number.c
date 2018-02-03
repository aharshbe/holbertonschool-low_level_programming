#include "holberton.h"
#include <stdio.h>
/**
* print_array - print every other character
* @a: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
void print_number(int n)
{
	
	int mult = 0;
	
	while (n / 10 > 0)
	{
		mult++;
		printf("Mult: %d\n", mult);
	}




	if (n > 0)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	}
	putchar('\n');
}
