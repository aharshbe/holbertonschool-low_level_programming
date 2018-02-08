#include "holberton.h"
/**
* isPrime - Short description, single line
* @n: Description of parameter n
* @x: Description of parameter n
* Return: 0
*/
int isPrime(int n, int x)
{
	if (x == 2)
	{
		return (1);
	}
	else
	{
		if (n % x != 0)
		{
			return (isPrime(n, x - 1));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/**
* is_prime_number - Short description, single line
* @n: Description of parameter n
* Return: 0
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 1 || n == 0)
	{
		return (0);
	}
	else
	{
		return (isPrime(n, n - 1));
	}
}
