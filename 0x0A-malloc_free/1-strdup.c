#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Short description, single line
* @str: Description of parameter size
* Return: 0
*/
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *p;

	if (!str)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	p = malloc(sizeof(str) * sizeof(char));

	if (!p)
		return (NULL);

	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
