#include "holberton.h"
/**
* _strcmp - Short description, single line
* @s1: Description of parameter n
* @s2: Description of parameter n
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int size = 0, size2 = 0, isSame = 0, i = 0;

	while (s1[size] != '\0')
	{
		size++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (size > size2)
	{
		return (1);
	}
	for ( ; i < size + size2 && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			isSame = (0);
		}
		else if (s1[i] != s2[i])
		{
			return (-1);
		}
	}
	return (isSame);
}
