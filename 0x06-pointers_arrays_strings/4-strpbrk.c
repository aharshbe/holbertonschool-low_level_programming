#include "holberton.h"
#define NULL 0
/**
* _strpbrk - Short description, single line
* @s: Description of parameter s
* @accept: Description of parameter b
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *result;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				return (result);
			}
			else
			{
				result = NULL;
			}
		}
	}
	return (NULL);
}
