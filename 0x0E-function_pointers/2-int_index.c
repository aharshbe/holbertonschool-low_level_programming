#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: name of the person
 * @cmp: name of the person
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, size_s = size, val = -1;

	if (size_s > 0)
	{
		if (array != 0)
		{
			if (cmp != 0)
			{
				while (i < size_s)
				{
					if (cmp(array[i]) == 1)
					{
						val = i;
						break;
					}
					i++;
				}
			}
		}
	}
	else if (size_s <= 0)
	{
		return (-1);
	}

	return (val);
}
