#include "holberton.h"
/**
* print_array - print every other character
* @a: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
void print_number(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			_putchar(a[i] + '0');
		}
		else
		{
			_putchar(a[i] + '0');
		}
	}
	_putchar('\n');
}