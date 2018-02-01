#include "holberton.h"
/**
* _strncat - Short description, single line
* @dest: Description of parameter n
* @src: Description of parameter n
* @n: Description of parameter n
* Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int  i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
}
