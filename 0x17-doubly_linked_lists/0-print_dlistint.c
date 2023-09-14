#include "lists.h"
/**
 * print_dlistint - Function that prints eall elements
 * @h: header
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
