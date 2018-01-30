#include "holberton.h"
/**
* puts_half - print every other character
* @str: Description of parameter n
* Return: 0
*/
void puts_half(char *str)
{
	int size, half, i;

	while (str[size] != '\0')
	{
		size++;
	}

	half = size / 2;

	for (i = half; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
