#include "sort.h"
<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
listint_t *node;
if (list == NULL || (*list)->next == NULL)
return;
node = (*list)->next;
while (node)
{
while ((node->prev) && (node->prev->n > node->n))
{
node = swap_node(node, list);
print_list(*list);
}
node = node->next;
}
}
/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
listint_t *back = node->prev, *current = node;
back->next = current->next;
if (current->next)
current->next->prev = back;
current->next = back;
current->prev = back->prev;
back->prev = current;
if (current->prev)
current->prev->next = current;
else
*list = current;
return (current);
>>>>>>> 28df2684cf5344ecb04abb54b05a11afceced655
}
