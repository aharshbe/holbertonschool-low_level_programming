#include <stdio.h>
/**
* main - Short description, single line
* @argc: arg count
* @argv: arg vector
* Return: 0
*/

int main(int argc, char **argv)
{
	/* cause we are compiling with warnings this is needed */
	if (argv[0] != NULL)
	{}

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
