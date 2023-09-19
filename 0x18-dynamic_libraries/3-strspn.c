#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: The number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
i++;
break;
}
else if (accept[j + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
