#include "holberton.h"
#include <stdio.h>
/**
 * _abs - Short description, single line
 * @n: Description of parameter c
 * Return: 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
