#include "holberton.h"
/**
* puts_half - print every other character
* @str: Description of parameter n
* Return: 0
*/
void puts_half(char *str)
{
	int size = 0, half;

	while (str[size] != '\0')
	{
		size++;
	}

	if (size % 2 == 0)
	{
		half = size / 2;
	}
	else
	{
		half = (size + 1) / 2;
	}

	for ( ; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');

}
