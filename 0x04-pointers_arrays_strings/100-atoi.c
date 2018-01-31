#include "holberton.h"
#include <stdio.h>
/**
* _atoi - print every other character
* @s: Description of parameter n
* Return: 0
*/
int _atoi(char *s)
{
	int i = 0, j = 0;
	int prefix = 1;
	unsigned int result = 0;

	for ( ; s[j] != '\0'; j++)
	{
		if (s[j] < '-')
		{
			i++;
		}
		else if (s[j] == '-')
		{
			prefix *= -1;
			i++;
		}
		else if (s[j] > '9')
		{
			if (s[j] == ';')
			{
				break;
			}
			i++;
		}
		else
		{
			for ( ; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; i++)
			{
				result = result * 10 + (s[i] - '0');
			}
		}
	}
	return (result * prefix);
}
