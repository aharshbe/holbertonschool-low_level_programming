#include "holberton.h"
/**
* _strlen - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
int _strlen(char *s)
{
	int size;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
