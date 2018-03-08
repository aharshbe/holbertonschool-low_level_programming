#include "holberton.h"

/**
 * flip_bits - clear the bit
 * @n: number to print
 * @m: second number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int total = n ^ m;

	while (total)
	{
		if ((total & 1) == 1)
			count += total & 1;
		total >>= 1;
	}
	return (count);
}

