#include "holberton.h"
#include <stdio.h>
/**
* cap_string - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
char *cap_string(char *s)
{
	int size = 0, i = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[i] -= 32;
	}
	for ( ; i < size; i++)
	{
		if (s[i] == '\n' || s[i] == 32 || s[i] == '\t')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
			else
			{
				i--;
				continue;
			}
			printf("Changed: %c\n", s[i]);
		}
	}
	return (s);
}
