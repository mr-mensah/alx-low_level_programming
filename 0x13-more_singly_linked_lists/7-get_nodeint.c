#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of a listint_t list.
 * @head: begining
 * @index: index
 * Return: temp
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *beg = head;
while (beg && i < index)
{
beg = beg->next;
i++;
}
return (beg ? beg : NULL);
}
