#include "holberton.h"
/**
* _memset - Short description, single line
* @s: Description of parameter s
* @b: Description of parameter b
* @n: Description of parameter n
* Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
