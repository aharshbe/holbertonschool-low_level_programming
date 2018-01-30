#include "holberton.h"
#include <stdio.h>
/**
* print_array - print every other character
* @a: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
