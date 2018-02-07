#include "holberton.h"
/**
* factorial- Short description, single line
* @n: Description of parameter n
* Return: 0
*/
int factorial(int n)
{
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
