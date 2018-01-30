#include "holberton.h"
#include <stdio.h>
/**
* rev_string - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
void rev_string(char *s)
{
	int i, size = 0, swap = 0;
	char tmp, tmp2;

	while (s[size] != '\0')
	{
		size++;
	}

	printf("size is: %d\n", size);

	for (i = size; i > (size / 2) - 1; i--)
	{
		if (s[i] != '\0')
		{
			tmp = s[i];
			tmp2 = s[swap];

			s[i] = tmp2;
			s[swap] = tmp;
			printf("Swapped: %c with %c\n", tmp2, tmp);

			swap++;

		}
	}
}
