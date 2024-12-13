#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swapped;

for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = 1;

for (size_t k = 0; k < size; k++)
{
printf("%d", array[k]);
if (k < size - 1)
printf(", ");
}
printf("\n");
}
}
if (swapped == 0)
break;
}
}
