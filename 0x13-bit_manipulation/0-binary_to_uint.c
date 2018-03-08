#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: binary number
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, val = 0, b2 = 0;

	if (!b)
		return (0);

	while (b[i])
		i++;
	i--;

	while (i >= 0)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		val += (b[i] - 48) * (1 << b2);
		i--;
		b2++;
	}
	return (val);
}
