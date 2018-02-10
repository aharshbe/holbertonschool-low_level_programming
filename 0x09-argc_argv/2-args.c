#include <stdio.h>
/**
* main - Short description, single line
* @argc: arg count
* @argv: arg vector
* Return: 0
*/

int main(int argc, char **argv)
{

	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
