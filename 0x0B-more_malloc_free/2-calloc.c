#include <stdio.h>
#include <stdlib.h>
/**
* _memset - Short description, single line
* @s: Description of parameter size
* @b: Description of parameter size
* @n: Description of parameter size
* Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
* _calloc - Short description, single line
* @nmemb: Description of parameter size
* @size: Description of parameter size
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int elements = nmemb, memory_s = size;
	char *p;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	p = malloc(elements * memory_s);

	if (p == NULL)
		return (NULL);

	return (_memset(p, 0, elements));
}
