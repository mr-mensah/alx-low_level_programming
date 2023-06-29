#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @q: pointer to string params
 *
 * Return: *q
 */
char *rot13(char *q)
{
int i;
int j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; q[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (q[i] == a[j])
{
q[i] = b[j];
break;
}
}
}
return (q);
}
