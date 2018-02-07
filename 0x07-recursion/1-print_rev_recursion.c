#include "holberton.h"
/**
* _print_rev_recursion - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
