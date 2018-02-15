#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - Short description, single line
* @s1: Description of parameter size
* @s2: Description of parameter size
* @n: Description of parameter size
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = 0, size2 = 0, num = n, i = 0, j = 0, k = 0, totalsize = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size] != '\0')
		size++;
	while (s2[size2] != '\0')
		size2++;

	if (num >= size2)
	{
		p = malloc(sizeof(char) * (size + size2) + 1);
		totalsize = size + size2;
	}
	else
	{
		p = malloc(sizeof(char) * (size + num) + 1);
		totalsize = size + num;
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = s1[i];

	for (j = i; j < totalsize; j++, k++)
		p[j] = s2[k];

	p[totalsize] = '\0';

	return (p);
}
