#include<stdio.h>
/**
 * main - Short description, single line
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long i;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
			number = number / i;
	}
	printf("%li\n", number);

	return (0);
}
