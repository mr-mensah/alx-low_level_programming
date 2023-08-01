#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: first node
 * Return: freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int i;
listint_t *beg;
if (!h || !*h)
return (0);
while (*h)
{
i = *h - (*h)->next;
if (i > 0)
{
beg = (*h)->next;
free(*h);
*h = beg;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}
*h = NULL;
return (length);
}
