#include "holberton.h"
/**
 * _islower - Short description, single line
 * @c: Description of parameter c
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
