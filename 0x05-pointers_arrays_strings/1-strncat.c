#include "holberton.h"
/**
* _strncat - Short description, single line
* @dest: Description of parameter n
* @src: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int size = 0, j, k;

	while (dest[size] != '\0')
	{
		size++;
	}


	for (j = size, k = 0; j < size + n; j++, k++)
	{
		dest[j] = src[k];
	}

	return (dest);
}
