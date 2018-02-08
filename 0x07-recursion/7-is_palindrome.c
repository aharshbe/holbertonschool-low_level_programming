#include "holberton.h"
#define NULL 0
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
	int recall = 0;

	if (*s == NULL || *p == NULL)
	{
		return (0);
	}

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


/**
* is_palindrome - Short description, single line
* @s: Description of parameter n
* Return: 0
*/
int is_palindrome(char *s)
{
	int size = len(s);
	char *p;

	p = (s + size) - 1;

	return (compare(s, p));
}
