#include "holberton.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to print
 * @index: index to obtain
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(long int) * 8) < index)
		return (-1);
	return ((n >> index) & 1);
}
