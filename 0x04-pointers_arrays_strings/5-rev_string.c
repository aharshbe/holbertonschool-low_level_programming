#include "holberton.h"
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

	for (i = size; i > (size / 2) - 1; i--)
	{
		if (s[i] != '\0')
		{
			tmp = s[i];
			tmp2 = s[swap];

			s[i] = tmp2;
			s[swap] = tmp;

			swap++;

		}
	}
}
