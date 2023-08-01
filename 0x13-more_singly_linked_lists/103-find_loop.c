#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: beginning
 * Return: end
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *walk = head;
listint_t *run = head;
if (!head)
return (NULL);
while (walk && run && run->next)
{
run = run->next->next;
walk = walk->next;
if (run == walk)
{
walk = head;
while (walk != run)
{
walk = walk->next;
run = run->next;
}
return (run);
}
}
return (NULL);
}
