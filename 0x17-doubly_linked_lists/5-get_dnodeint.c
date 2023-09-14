#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns another function
 * @head: head
 * @index: argument
 * Return: null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int width;
dlistint_t *shak;
width = 0;
if (head == NULL)
return (NULL);
shak = head;
while (shak)
{
if (index == width)
return (shak);
width++;
shak = shak->next;
}
return (NULL);
}
