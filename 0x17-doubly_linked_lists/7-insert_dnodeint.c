#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts more
 * @h: head
 * @idx: argument
 * @n: argument
 * Return: fre
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *nse = *h, *fre;
if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
nse = nse->next;
if (nse == NULL)
return (NULL);
}
if (nse->next == NULL)
return (add_dnodeint_end(h, n));
fre = malloc(sizeof(dlistint_t));
if (fre == NULL)
return (NULL);
fre->n = n;
fre->prev = nse;
fre->next = nse->next;
nse->next->prev = fre;
nse->next = fre;
return (fre);
}
