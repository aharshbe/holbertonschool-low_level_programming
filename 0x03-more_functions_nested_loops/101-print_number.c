#include "holberton.h"
/**
 * print_number - Short description, single line
 * @n: Description of parameter c
 * Return: 0
 */
void twodigit(int x);
void threedigit(int s);
void fourdigit(int f);

void print_number(int n)
{

	if (n < 100)
	{
		twodigit(n);

	}
	else
	{
		if (n >= 100 && n < 999)
		{

			threedigit(n);
		}
		else
		{

			fourdigit(n);

		}
	}
}
/**
 * twodigit - Short description, single line
 * @x: Description of parameter c
 * Return: 0
 */
void twodigit(int x)
{
	int i, j;

	if (x == 0)
	{
		_putchar(x + '0');
	}

	if (x < 0)
	{
		x = x * -1;
		i = x / 10 + '0';
		j = x % 10 + '0';
		_putchar('-');
		_putchar(i);
		_putchar(j);
	}
	else if (x > 0)
	{
		i = x / 10 + '0';
		j = x % 10 + '0';
		_putchar(i);
		_putchar(j);
	}
}
/**
 * threedigit - Short description, single line
 * @s: Description of parameter c
 * Return: 0
 */
void threedigit(int s)
{
	int first, middle, last;

	first = (s / 10) / 10;
	_putchar(first + '0');
	middle = (s / 10) % 10;
	_putchar(middle + '0');
	last = s % 10;
	_putchar(last + '0');
}
/**
 * fourdigit - Short description, single line
 * @f: Description of parameter c
 * Return: 0
 */
void fourdigit(int f)
{
	int firstt, second, third, fourth;

	firstt = ((f / 10) / 10) / 10;
	_putchar(firstt + '0');
	second = ((f / 10) / 10) % 10;
	_putchar(second + '0');
	third = (f / 10) % 10;
	_putchar(third + '0');
	fourth = f % 10;
	_putchar(fourth + '0');
}
