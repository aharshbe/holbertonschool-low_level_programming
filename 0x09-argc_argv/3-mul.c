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

	int a = 0, b = 0;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
