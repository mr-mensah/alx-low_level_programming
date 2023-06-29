#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string  to uppercase
 * @q: pointer
 *
 * Return: q
 */
char *string_toupper(char *q)
{
int i;
i = 0;
while (q[i] != '\0')
{
if (q[i] >= 'a' && q[i] <= 'z')
q[i] = q[i] - 32;
i++;
}
return (q);
}
