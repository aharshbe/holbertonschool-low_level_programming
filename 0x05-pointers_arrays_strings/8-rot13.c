#include "holberton.h"
/**
* rot13 - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
char *rot13(char *s)
{
	int i = 0, rot = 13;

	for ( ; ((s[i] != '\0') && (s[i] >= 65 && s[i] <= 90))
	 || (s[i] >= 97 && s[i] <= 122); i++)
	{
		if ((s[i] + rot) > 90 || (s[i] + rot) > 122)
		{
			s[i] -= rot;
		}
		else if (s[i] + rot < 65 || s[i] + rot < 97)
		{
			s[i] = s[i];
		}
		else
		{
			s[i] += rot;
		}
	}
	return (s);
}
