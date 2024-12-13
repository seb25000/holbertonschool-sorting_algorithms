#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: double pointer to listint_t
 */
void insertion_sort_list(listint_t **list)
{
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

listint_t *current = (*list)->next;
while (current != NULL)
{
listint_t *temp = current->next;
listint_t *insertion_point = current->prev;

while (insertion_point != NULL && insertion_point->n > current->n)
{
if (insertion_point->prev != NULL)
insertion_point->prev->next = current;
else
*list = current;

if (current->next != NULL)
current->next->prev = insertion_point;

insertion_point->next = current->next;
current->prev = insertion_point->prev;
current->next = insertion_point;
insertion_point->prev = current;

print_list(*list);
insertion_point = current->prev;
}
current = temp;
}
}
