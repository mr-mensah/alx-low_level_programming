#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: compares both strings before concatinating them
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int i = 0, j = 0, k = 0, l = 0;
while (s1 && s1[k])
k++;
while (s2 && s2[l])
l++;
if (n < l)
a = malloc(sizeof(char) * (k + n + 1));
else
a = malloc(sizeof(char) * (k + l + 1));
if (!a)
return (NULL);
while (i < k)
{
a[i] = s1[i];
i++;
}
while (n < l && i < (k + n))
a[i++] = s2[j++];
while (n >= l && i < (k + l))
a[i++] = s2[j++];
a[i] = '\0';
return (a);
}
