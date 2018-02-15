#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - Short description, single line
* @nmemb: Description of parameter size
* @size: Description of parameter size
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int elements = nmemb, memory_s = size;/*i = 0;*/
	char *p;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	p = malloc(elements * memory_s);

	if (p == NULL)
		return (NULL);

	/*
	* for ( ; i < elements; i++)
	* {
	*	p[i] = 0;
	* }
	*
	* return (p);
	*/

	return (memset(p, 0, elements));
}
