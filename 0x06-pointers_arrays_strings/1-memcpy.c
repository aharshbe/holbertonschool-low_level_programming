#include "holberton.h"
/**
* _memcpy - Short description, single line
* @dest: Description of parameter s
* @src: Description of parameter b
* @n: Description of parameter n
* Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
