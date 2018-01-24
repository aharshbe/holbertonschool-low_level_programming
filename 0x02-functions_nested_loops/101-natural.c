#include <stdio.h>
/**
 * main - Short description, single line
 * Return: 0
 */

int main(void)
{
	int n = 1024;
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			k += i;
		}
	}
	printf("%d\n", k);
	return (0);
}
