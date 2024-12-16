#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
<<<<<<< HEAD

=======
>>>>>>> 28df2684cf5344ecb04abb54b05a11afceced655
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
=======
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
size_t n = sizeof(array) / sizeof(array[0]);
print_array(array, n);
printf("\n");
quick_sort(array, n);
printf("\n");
print_array(array, n);
return (0);
>>>>>>> 28df2684cf5344ecb04abb54b05a11afceced655
}
