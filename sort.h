#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdlib.h>
/*Comparison direction macros for bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - Enumeration of boolean values*/
typedef enum bool
{
    false = 0,
    true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
listint_t *swap_node(listint_t *node, listint_t **list);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif
