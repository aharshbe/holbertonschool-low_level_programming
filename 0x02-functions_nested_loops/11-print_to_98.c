#include <stdio.h>
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_to_98(int n)
{

	int i, j;

	for (i = n, j = n; i <= 98; i++, j++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
