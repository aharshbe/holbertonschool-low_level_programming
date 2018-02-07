#include "holberton.h"
/**
* _pow_recursion - Short description, single line
* @x: Description of parameter n
* @y: Description of parameter n
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y != 0 && !(y < 0))
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
