#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: name of the person
 * @action: name of the person
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0, size_s = size;

	if (size_s > 0)
	{
		if (array != 0)
		{
			if (action != 0)
				while (i < size_s)
				{
					action(array[i]);
					i++;
				}
		}
	}
}
