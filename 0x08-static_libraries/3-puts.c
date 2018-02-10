#include "holberton.h"
/**
* _puts - Short description, single line
* @str: Description of parameter n
* Return: 0
*/
void _puts(char *str)
{
	int size;

	while (str[size] != '\0')
	{
		_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}