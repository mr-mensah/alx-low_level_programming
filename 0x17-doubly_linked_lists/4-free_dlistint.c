#include "lists.h"
/**
 * free_dlistint - function that frees other function
 * @head: head
 * Return: null
 **/
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
