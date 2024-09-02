#ifndef SORT_H
#define SORT_H


#include <stddef.h>
#include <stdio.h>

/* Data structure for doubly linked list */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer sored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *left, listint_t *right);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort_recursive(int *array, int low, int high, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);
void swap(int *a, int *b);

#endif /* SORT_H */
