#include "holberton.h"
/**
* find_root - Short description, single line
* @x: Description of parameter n
* @y: Description of parameter n
* Return: 0
*/
int find_root(int x, int y)
{
	int number = y;

	if (y < 0)
		return (-1);

	if (number * number != x)
		return (find_root(x, number - 1));

	return (number);
}
/**
* _sqrt_recursion - Short description, single line
* @n: Description of parameter n
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (find_root(n, n));
}
