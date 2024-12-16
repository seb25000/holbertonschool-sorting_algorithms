#include "sort.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
/**
 * swap - the positions of two elements into an array
 * @array: array
 * @item1: array element
 * @item2: array element
 */
void swap(int *array, ssize_t item1, ssize_t item2)
{
int tmp;
tmp = array[item1];
array[item1] = array[item2];
array[item2] = tmp;
}
/**
 * lomuto_partition - lomuto partition sorting scheme implementation
 * @array: array
 * @first: first array element
 * @last: last array element
 * @size: size array
 * Return: return the position of the last element sorted
 */
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
int pivot = array[last];
ssize_t current = first, finder;
for (finder = first; finder < last; finder++)
{
if (array[finder] < pivot)
{
if (array[current] != array[finder])
{
swap(array, current, finder);
print_array(array, size);
}
current++;
}
}
if (array[current] != array[last])
{
swap(array, current, last);
print_array(array, size);
}
return (current);
}
/**
 * qs - qucksort algorithm implementation
 * @array: array
 * @first: first array element
 * @last: last array element
 * @size: array size
 */
void qs(int *array, ssize_t first, ssize_t last, int size)
{
ssize_t position = 0;
if (first < last)
{
position = lomuto_partition(array, first, last, size);
qs(array, first, position - 1, size);
qs(array, position + 1, last, size);
}
}
/**
 * quick_sort - prepare the terrain to quicksort algorithm
 * @array: array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
qs(array, 0, size - 1, size);
=======

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
>>>>>>> 28df2684cf5344ecb04abb54b05a11afceced655
}
