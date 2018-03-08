#include "holberton.h"

/**
 * flip_bits - clear the bit
 * @n: number to print
 * @m: second number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int count = 0, total = n ^ m;

	while (total)
	{
		count += total & 1;
		total >>= 1;
	}
	return (count);
}

