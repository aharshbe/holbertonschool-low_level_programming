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

	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)calloc(width * height, width * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		p[i] = (int *)calloc(width * height, height * sizeof(int));

	if (p[0] == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
