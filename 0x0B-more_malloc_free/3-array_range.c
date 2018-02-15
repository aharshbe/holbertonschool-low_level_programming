#include <stdio.h>
#include <stdlib.h>
/**
* array_range - Short description, single line
* @min: Description of parameter size
* @max: Description of parameter size
* Return: 0
*/
int *array_range(int min, int max)
{
	int i = 0, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(max);

	if (!p)
		return (NULL);
	for (j = 0, i = min; i <= max; i++, j++)
	{
		p[j] = i;
	}

	return (p);
}
