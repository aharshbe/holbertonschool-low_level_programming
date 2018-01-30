#include "holberton.h"
#include <stdio.h>
/**
* _atoi - print every other character
* @s: Description of parameter n
* Return: 0
*/
int _atoi(char *s)
{
	int size = 0;
	char *ptr;
	
	while (s[size] != '\0')
	{
		size++;
	}

	ptr = s;
	printf("%d\n", ptr[0]);
	*(ptr) -= 48;
	printf("%d\n", ptr[0]);


	
	
	return (0);
}