#include "holberton.h"
/**
* reverse_array - Short description, single line
* @a: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, tmp = 0, tmp2 = 0;

	for ( ; i > (n / 2); i--, j++)
	{
		tmp = a[i];
		tmp2 = a[j];
		a[i] = tmp2;
		a[j] = tmp;
	}
}
