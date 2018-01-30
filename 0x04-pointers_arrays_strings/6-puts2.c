#include "holberton.h"
/**
* puts2 - print every other character
* @str: Description of parameter n
* Return: 0
*/
void puts2(char *str)
{
	int size, i;

	while (str[size] != '\0')
	{
		size++;
	}

	printf("This is the size: %d\n", size);

	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
