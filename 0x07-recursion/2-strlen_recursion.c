#include "holberton.h"
/**
* _strlen_recursion - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return _strlen_recursion(s+1) + 1;
	}
	return (0);
}
