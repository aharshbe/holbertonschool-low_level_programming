#include "holberton.h"
/**
* print_chessboard - Short description, single line
* @a: Description of parameter s
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
