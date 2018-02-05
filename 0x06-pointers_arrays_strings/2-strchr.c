#include "holberton.h"
#define NULL 0
/**
* _strchr - Short description, single line
* @s: Description of parameter s
* @c: Description of parameter b
* Return: 0
*/
char *_strchr(char *s, char c)
{
	int size = 0, i = 0;
	char *p = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	for ( ; i < size; i++)
	{
		if (c != NULL && s[i] == c)
		{
			p = &s[i];
			break;
		}
		else
		{
			p = NULL;
		}
	}
	return (p);
}
