#include "lists.h"
/**
 * add_nodeint_end - function adds new node at the end of a listint_t list
 * @head: first element
 * @n: input
 * Return: nod
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nod;
listint_t *temp = *head;
nod = malloc(sizeof(listint_t));
if (!nod)
return (NULL);
nod->n = n;
nod->next = NULL;
if (*head == NULL)
{
*head = nod;
return (nod);
}
while (temp->next)
temp = temp->next;
temp->next = nod;
return (nod);
}
