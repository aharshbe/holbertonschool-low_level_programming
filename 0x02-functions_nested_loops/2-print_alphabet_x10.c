#include "austin.h"
/**
* program should return 0
*/
void print_alphabet_10x(void);
int main(void)
{
	print_alphabet_10x(void);
	return (0);
}

void print_alphabet_10x(void)
{
	int i, outer;

	for (outer = 0; outer <= 10; outer++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
