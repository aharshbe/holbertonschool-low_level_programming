#include "holberton.h"
/**
* print_rev - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
void print_rev(char *s)
{
	int rev, size;

	while (s[size] != '\0')
	{
		size++;
	}

	for (rev = size; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
