#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: beginning
 * Return: end
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = rev;
rev = *head;
*head = next;
}
*head = rev;
return (*head);
}
