#include "lists.h"
/**
 * add_nodeint - function that adds a new node at beginning of listint_t list
 * @head: first nodet
 * @n: input
 * Return: new node or 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
