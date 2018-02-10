#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - description
* @argc: arg count
* @argv: arg vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1, num = 0, j = 0;

	for ( ; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num += atoi(argv[i]);
		j = 0;
	}
	printf("%d\n", num);
	return (0);
}
