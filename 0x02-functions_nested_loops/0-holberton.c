#include "holberton.h"
/**
* output from function
* should be 0
*/

int main(void)
{
	char holberton[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0; i < sizeof(holberton) / sizeof(char); i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
