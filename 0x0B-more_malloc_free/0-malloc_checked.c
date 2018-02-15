#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Short description, single line
* @b: Description of parameter size
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	char *p;
	int a = b;

	p = malloc(a);

	if (!p)
		exit(98);
	else
		return (p);
}
