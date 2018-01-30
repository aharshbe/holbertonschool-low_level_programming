#include "holberton.h"
/**
* _strcpy - print every other character
* @dest: Description of parameter n
* @src: Description of parameter n
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < size; i++)
		dest[i] = '\0';

	return (dest);
}
