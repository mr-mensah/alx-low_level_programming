#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given point
 * @head: beginning
 * @idx: index
 * @n: pointer
 * Return: null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *fresh;
listint_t *temp = *head;
fresh = malloc(sizeof(listint_t));
if (!fresh || !head)
return (NULL);
fresh->n = n;
fresh->next = NULL;
if (idx == 0)
{
fresh->next = *head;
*head = fresh;
return (fresh);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
fresh->next = temp->next;
temp->next = fresh;
return (fresh);
}
else
temp = temp->next;
}
return (NULL);
}
