#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: first element
 * Return: things deleted
 */
int pop_listint(listint_t **head)
{
listint_t *del;
int i;
if (!head || !*head)
return (0);
i= (*head)->n;
del = (*head)->next;
free(*head);
*head = del;
return (i);
}
