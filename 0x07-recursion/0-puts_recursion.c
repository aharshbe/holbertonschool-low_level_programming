#include "holberton.h"
/**
* puts_recursion - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
