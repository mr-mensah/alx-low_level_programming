#include "lists.h"
/**
 * add_dnodeint - function that adds a fresh node to it
 * @head: head
 * @n: argument
 * Return: fresh
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *fresh;
fresh = malloc(sizeof(dlistint_t));
if (fresh == NULL)
return (NULL);
fresh->n = n;
fresh->prev = NULL;
fresh->next = *head;
if (*head != NULL)
(*head)->prev = fresh;
*head = fresh;
return (fresh);
}
