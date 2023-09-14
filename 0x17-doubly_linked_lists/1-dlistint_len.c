#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: head
 * Return: num
 */
size_t dlistint_len(const dlistint_t *h)
{
int num;
num = 0;
if (h == NULL)
return (num);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
