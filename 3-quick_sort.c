#include "sort.h"

/**
 * swap - Swaps two elements in an array.
 * @a: First element to swap.
 * @b: Second element to swap.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partitions the array using the Lomuto partition scheme.
 * @array: The array to partition.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array (for printing purposes).
 *
 * Return: The index of the pivot element after partitioning.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
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
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort_recursive - Recursively sorts the array using Quick sort.
 * @array: The array to sort.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array (for printing purposes).
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quicksort_recursive(array, low, pivot_index - 1, size);
		quicksort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort_recursive(array, 0, size - 1, size);
}

