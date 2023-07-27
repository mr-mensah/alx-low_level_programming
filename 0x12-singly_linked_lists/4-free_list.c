#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: list freed
 */
void free_list(list_t *head)
{
list_t *mine;
while (head)
{
mine = head->next;
free(head->str);
free(head);
head = mine;
}
}
