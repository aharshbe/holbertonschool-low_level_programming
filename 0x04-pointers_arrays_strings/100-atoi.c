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
	int i = 0;
	int tmp = 0;
	int result = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	int mult = size;

	for (; i < size; i++)
	{
		if (s[i] != '\0')
		{
			if (s[i] == 45)
			{
				
				printf("it was negative\n");
			}
			else
			{
				tmp = s[i] - 48;
				printf("%d\n", tmp);
			}

			switch (mult)
			{
				case (3):
					result += tmp * 100;
					mult--;
					printf("result is: %d, mult is: %d\n", result, mult);
					break;
				case (2):
					result += tmp * 10;
					mult--;
					printf("result is: %d, mult is: %d\n", result, mult);
					break;
				case (1):
					result += tmp * 1;
					mult--;
					printf("result is: %d, mult is: %d\n", result, mult);
					break;

			}
		}
	}



	return (result);
}