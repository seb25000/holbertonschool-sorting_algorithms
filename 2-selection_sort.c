#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order using
 * the Selection sort algorithm.
 * @size: size of integer
 * @array: pointer to int
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;
int temp;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
}
if (min_idx != i)
temp = array[i];
array[i] = array[min_idx];
array[min_idx] = temp;


for (size_t k = 0; k < size; k++)
{
printf("%d", array[k]);
if (k < size - 1)
printf(", ");
}
printf("\n");
}
}

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
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
