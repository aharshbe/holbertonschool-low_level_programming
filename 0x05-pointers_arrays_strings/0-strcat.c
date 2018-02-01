#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strcat - Short description, single line
* @dest: Description of parameter n
* @src: Description of parameter n
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int size = 0, size2 = 0, i = 0, j = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	size2 += size;

	while (dest[size2] != '\0')
	{
		size2++;
	}

	char * result = malloc((size + size2) + 1);

	for ( ; i < size - 1; i++)
	{
		result[i] = dest[i];
		printf("result at i is: %c\n", result[i]);
	}

	for ( ; j < size2; j++)
	{
		result[j] = src[j];
		printf("result at j is: %c\n", result[j]);
	}

	result[size2 + 1] = '\0';

	printf("The result is: %s\n", result);

	return (result);

}