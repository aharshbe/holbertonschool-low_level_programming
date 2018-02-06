#include "holberton.h"
#define NULL 0
#include <stdio.h>
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

	//get the size
	while (needle[size] != '\0')
	{
		size++;
	}
	printf("Size is: %d\n", size);

	// Go through all of haystack
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0]) //if you find any of haystack that ='s needle execute
		{
			found = &haystack[i]; //save the first instance of found for later
			printf("Found at: %s\n", found);

			for (j = 0, k = i; j < size; j++, k++) //go through all of needle
			{
				if (needle[j] == haystack[k]) //if you find another equal
				{
					printf("Found another match: %c %c\n", needle[j], haystack[k]);

					checker++; //increment checker for above check
					printf("Checker incremented to: %d\n", checker);
					if (checker == size) //check to see if the checker value ='s size
					{
						printf("Got into checker, found is: %s\n", found);
						return (found); //if it does, return found 
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
