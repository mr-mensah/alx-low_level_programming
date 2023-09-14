#include "lists.h"
/**
 * sum_dlistint - function that sums all of it
 * @head:head
 * Return: ans
 */
int sum_dlistint(dlistint_t *head)
{
int ans = 0;
while (head)
{
ans += head->n;
head = head->next;
}
return (ans);
}
