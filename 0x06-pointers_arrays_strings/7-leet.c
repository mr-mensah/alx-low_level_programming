#include "main.h"
/**
 * leet - encode a string into 1337
 * @a: input value
 * Return: a value
 */
char *leet(char *a)
{
int i, j;
char b[] = "aAeEoOtTlL";
char c[] = "4433007711";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (a[i] == b[j])
{
a[i] = c[j];
}
}
}
return (a);
}
