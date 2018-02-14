#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Short description, single line
* @grid: Description of parameter s1
* @height: Description of parameter s2
* Return: 0
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
