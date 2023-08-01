#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: list to be freed 
 */
void free_listint(listint_t *head)
{
listint_t *fre;
while (head)
{
fre = head->next;
fre(head);
head = fre;
}
}
