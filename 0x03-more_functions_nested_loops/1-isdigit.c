#include "holberton.h"
/**
 * _isdigit - Short description, single line
 * @c: Description of parameter c
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
