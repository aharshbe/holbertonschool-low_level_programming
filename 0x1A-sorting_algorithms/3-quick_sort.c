#include "sort.h"

/**
 * con - concatinate all the arrays
 *
 * @less: smallest array
 * @middle: middle array
 * @greater: end array
 * @array: final array
 */
void con(int *less, int *middle, int *greater, int *array)
{
	int l = 0, g = 0, i = 0;

	for ( ; less[l]; l++, i++)
		array[i] = less[l];
	array[i] = middle[0];
	i++;
	for ( ; greater[g]; g++, i++)
		array[i] = greater[g];
}

/**
 * quick_sort - sorts a list using quick sort
 *
 * @array: The list to be sorted
 * @size: The size of the list
 */
void quick_sort(int *array, size_t size)
{
	int less[size / 2], equal[1], greater[size / 2], l = 0, g = 0;
	size_t i = 0, pivot = size / 2;

	if (size > 2)
	{
		while (i < size)
		{
			if (array[i] < array[pivot])
			{
				less[l] = array[i];
				l++;
			}
			if (array[i] == array[pivot])
			{
				equal[0] = array[i];
			}
			if (array[i] > array[pivot])
			{
				greater[g] = array[i];
				g++;
			}
			i++;
		}
		less[l] = '\0';
		greater[g] = '\0';
		quick_sort(less, l);
		quick_sort(greater, g);
		con(less, equal, greater, array);
		print_array(array, size);
	}
}
