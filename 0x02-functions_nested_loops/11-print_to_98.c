#include <stdio.h>
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter n
* Return: Description of the returned value
*/
void print_to_98(int n)
{

	int i, j;

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
