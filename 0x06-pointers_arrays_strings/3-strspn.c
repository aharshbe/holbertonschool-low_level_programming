#include "holberton.h"
/**
* _strspn - Short description, single line
* @s: Description of parameter s
* @accept: Description of parameter b
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;

	int i = 0, j = 0;

	for (i = 0; ;  i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				num++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (num);
}
