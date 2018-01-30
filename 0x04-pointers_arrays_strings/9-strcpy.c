#include "holberton.h"
/**
* _strcpy - print every other character
* @dest: Description of parameter n
* @src: Description of parameter n
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int size, i;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}		
	}

	return (dest);
}
