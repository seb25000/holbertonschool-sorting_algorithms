#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
}
