#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: beginning
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *beg = *head;
listint_t *now = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(beg);
return (1);
}
while (i < index - 1)
{
if (!beg || !(beg->next))
return (-1);
beg = beg->next;
i++;
}
now = beg->next;
beg->next = now->next;
free(now);
return (1);
}
