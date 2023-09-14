#include "lists.h"
/**
 * add_dnodeint_end - functions that adds more at the end
 * @head: head
 * @n: argument
 * Return: fresh
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *fresh, *end;
fresh = malloc(sizeof(dlistint_t));
if (fresh == NULL)
return (NULL);
fresh->n = n;
fresh->next = NULL;
if (*head == NULL)
{
fresh->prev = NULL;
*head = fresh;
return (fresh);
}
end = *head;
while (end->next != NULL)
end = end->next;
end->next = fresh;
fresh->prev = end;
return (fresh);
}
