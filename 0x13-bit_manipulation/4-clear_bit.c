#include "holberton.h"

/**
 * clear_bit - clear the bit
 * @n: number to print
 * @index: index to obtain
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int shift = 1;

	if (!n)
		return (-1);

	if ((sizeof(long int) * 8) < index)
		return (-1);

	*n &= ~(shift <<= index);
	return (1);
}
