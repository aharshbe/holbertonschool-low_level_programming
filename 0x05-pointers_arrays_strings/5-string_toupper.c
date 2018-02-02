#include "holberton.h"
/**
* string_toupper - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
char *string_toupper(char *s)
{
	int size = 0, i = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	for ( ; i < size; i++)
	{
		if (s[i] >= 'a' && s[i] < 'A')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
