#include "sort.h"

/**
 * selection_sort -  a function that sorts an array of integers.
 * @array : array.
 * @size : size of array.
 * Return : sorted array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, tmp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				tmp = array[min];
				array[min] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
