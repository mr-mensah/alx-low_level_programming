#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *beg;
while (head)
{
beg = head->next;
free(head);
head = beg;
}
}
