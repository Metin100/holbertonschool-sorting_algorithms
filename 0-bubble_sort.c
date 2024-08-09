#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers.
 * @array : Array.
 * @size : size of Array.
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int tmp;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
