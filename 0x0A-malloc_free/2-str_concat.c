#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Short description, single line
* @s1: Description of parameter s1
* @s2: Description of parameter s2
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	int size = 0, size2 = 0, total_size = 0, i = 0, j = 0;
	char *p;

	if (!s1 || !s2)
		return (NULL);

	while (s1[size] != '\0')
		size++;

	while (s2[size2] != '\0')
		size2++;

	total_size = size + size2;

	p = malloc(total_size + 1);

	if (!p)
		return (NULL);


	while (i < size)
	{
		p[i] = s1[i];
		i++;
	}

	while (i < total_size)
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	p[total_size] = '\0';

	return (p);
}
