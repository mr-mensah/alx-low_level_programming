#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the n listint_t list
 * @head: beginning
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *beg = head;
while (beg)
{
sum += beg->n;
beg = beg->next;
}
return (sum);
}
