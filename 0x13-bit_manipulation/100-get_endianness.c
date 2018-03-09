#include "holberton.h"

/**
 * get_endianness - determine endianness
 * Return: 0
 */
int get_endianness(void)
{
	int n = 48, i = 49;

	return (*(&i) + n);
}
