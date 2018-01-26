#include<stdio.h>
/**
 * print_triangle - Short description, single line
 * @size: Description of parameter c
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			printf(" ");
		}

		for (k = 0; k < i; k++)
		{
			printf("#");
		}

		printf("\n");

	}
}
