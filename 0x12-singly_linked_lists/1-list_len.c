#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a list_t list
 * @h: pointer to the list_t
 * Return: s
 */
size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
s++;
h = h->next;
}
return (s);
}
