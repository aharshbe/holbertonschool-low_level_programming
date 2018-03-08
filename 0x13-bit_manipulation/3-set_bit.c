#include "holberton.h"

/**
 * set_bit - return the value of a bit at a given index
 * @n: number to print
 * @index: index to obtain
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int shift = 1;

	if (!n)
		return (-1);

	if ((sizeof(long int) * 8) < index)
		return (-1);

	shift <<= index;
	*n |= shift;
	return (1);
}
