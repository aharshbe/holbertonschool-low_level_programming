#include "holberton.h"
/**
* _strncpy - Short description, single line
* @dest: Description of parameter n
* @src: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = src[i];

	}

	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}

	return (dest);
}
