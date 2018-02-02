#include "holberton.h"
/**
* rot13 - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
char *rot13(char *s)
{
	int i = 0, j;

	char cleartext[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwzyz"};
	char ciphertext[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for ( ; s[i] != '\0'; i++)
	{
		for (j = 0; cleartext[j] != '\0'; j++)
		{
			if (s[i] == cleartext[j])
			{
				s[i] = ciphertext[j];
				break;
			}
		}
	}
	return (s);
}
