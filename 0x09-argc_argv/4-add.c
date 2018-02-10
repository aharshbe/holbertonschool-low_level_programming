#include <stdio.h>
#include <stdlib.h>
/**
* main - Short description, single line
* @argc: arg count
* @argv: arg vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int i = 1, result = 0, j = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (argv[i][0] > 48 && argv[i][0] <= 57)
			{
				result += atoi(argv[i]);
				i++;
				j++;
			}
			else
			{
				printf("Error\n");
				result = -1;
				break;
			}
		}
		if (!(result < 0))
			printf("%d\n", result);
	}
	else
	{
		printf("%d\n", 0);
	}
}
