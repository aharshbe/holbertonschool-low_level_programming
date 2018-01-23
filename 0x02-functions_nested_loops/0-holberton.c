#include "holberton.h"
/**
 * main - Entry point
 *
 * void - empty
 *
 * Return: Always 0 (Success)
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
