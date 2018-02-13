#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Short description, single line
* @size: Description of parameter size
* @c: char to replace with
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
	int i = 0, size2 = 0;

	if (size == 0)
		return (NULL);

	size2 = size;
	char *p = malloc(sizeof(char) * size2);

	while (i <= size2)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
