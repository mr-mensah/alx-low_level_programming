#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *fre;
if (head == NULL)
return;
while (*head)
{
fre = (*head)->next;
free(*head);
*head = fre;
}
*head = NULL;
}
