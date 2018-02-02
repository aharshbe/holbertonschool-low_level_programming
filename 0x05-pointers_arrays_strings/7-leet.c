#include "holberton.h"
/**
* leet - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
char *leet(char *s)
{
	int i = 0, l = 0;

	char reg[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char leet[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	while (s[i] != '\0')
	{
		while (s[i] == reg[l])
		{
			s[i] = leet[l];
			i++;
			l = 0;
		}
		l++;
		if (l >= 10)
		{
			i++;
			l = 0;
		}
	}
	return (s);
}
