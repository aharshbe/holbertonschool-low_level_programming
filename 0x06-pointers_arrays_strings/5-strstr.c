#include "holberton.h"
#define NULL 0
/**
* _strstr - Short description, single line
* @haystack: Description of parameter s
* @needle: Description of parameter b
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0, size = 0, checker = 0;
	char *found;

	if (*needle == NULL)
	{
		return (haystack);
	}

	while (needle[size] != '\0')
	{
		size++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			found = &haystack[i];
			for (j = 0, k = i; j < size; j++, k++)
			{
				if (needle[j] == haystack[k])
				{
					checker++;
					if (checker == size)
					{
						return (found);
					}
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			continue;
		}
	}
	return (NULL);
}
