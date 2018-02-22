#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a name as is
 * @argc: name of the person
 * @argv: name of the person
 *
 * Return: 0 is success or 98 if fail.
 */

int main(int argc, char **argv)
{
	int total = 0, i = 0;

	char *p;

	if (argc > 1 && argc < 3)
	{
		p = (char *)&main;
		total = atoi(argv[1]);

		if (total < 0)
		{
			printf("Error\n");
			return (2);
		}

		for ( ; i < total; i++)
		{
			if (i == total - 1)
			{
				printf("%02hhx", p[i]);
			}
			else
			{
				printf("%02hhx ", p[i]);
			}
		}
		printf("\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
