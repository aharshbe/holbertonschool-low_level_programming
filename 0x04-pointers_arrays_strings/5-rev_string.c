#include "holberton.h"
/**
* rev_string - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
void rev_string(char *s)
{

	int i, r, f;

	char tmp[10];

	for (i = 0, r = 8; i < 10; i++, r--)
	{
		tmp[i] = s[r];
	}

	for (f = 0; f < 10; f++)
	{
		s[f] = tmp[f];
	}
}
