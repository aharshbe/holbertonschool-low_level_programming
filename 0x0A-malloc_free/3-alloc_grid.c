#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Short description, single line
* @width: Description of parameter s1
* @height: Description of parameter s2
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0, j = 0, freed = 0;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (freed <= i)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
