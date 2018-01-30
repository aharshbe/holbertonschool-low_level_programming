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


	/*To copy into tmp reversed*/
	for (i = 0, r = 8; i < 10; i++, r--)
	{
		tmp[i] = s[r];

	}

	/*To copy back into s*/
	for (f = 0; f < 10; f++)
	{
		s[f] = tmp[f];
	}
}
