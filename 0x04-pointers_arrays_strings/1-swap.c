#include "holberton.h"
/**
* swap_int - Short description, single line
* @a: Description of parameter n
* @b: Description of parameter n
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
