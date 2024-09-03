#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @a: First element to swap.
 * @b: Second element to swap.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions the array using the Lomuto partition scheme.
 * @array: The array to partition.
 * @size: The size of the array (for printing purposes).
 *
 * Return: The index of the pivot element after partitioning.
 */
size_t partition(int *array, size_t size)
{
	int pivot = array[size - 1];
	size_t i = (size_t)-1;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != size - 1)
	{
		swap(&array[i + 1], &array[size - 1]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;

	/* Partition the array and get the pivot index */
	pivot = partition(array, size);

	/* Recursively sort the elements before and after the pivot */
	quick_sort(array, pivot);
	quick_sort(array + pivot, size - pivot);
}
