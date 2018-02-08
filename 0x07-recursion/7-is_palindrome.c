#include "holberton.h"
/**
* is_palindrome - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
int len(char *s);
int compare(char *s, char *p);

int is_palindrome(char *s)
{
	return (compare(s, s));
}

/**
* len - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
int len(char *s)
{
	if (*s)
	{
		return (len(s + 1) + 1);
	}
	return (0);
}

/**
* compare - Short description, single line
* @s: Description of parameter n
* @p: Description of parameter n
* Return: 0
*/
int compare(char *s, char *p)
{
	int size = len(s);
	int recall = 0;

	p = (s + size) - 1;

	if (*s == *p)
	{
		recall = 1;
		compare(s + 1, p - 1);
	}
	else
	{
		recall = 0;
	}

	return (recall);
}
