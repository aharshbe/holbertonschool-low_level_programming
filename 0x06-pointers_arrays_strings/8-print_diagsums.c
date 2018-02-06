#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - Short description, single line
* @a: Description of parameter s
* @size: Description of parameter b
* Return: 0
*/
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum = 0, sum1 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum += a[i];
	}
	printf("%d, ", sum);

	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		sum1 += a[j];
	}
	printf("%d\n", sum1);

}
