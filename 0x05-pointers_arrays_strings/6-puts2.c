#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int length = 0;
int i = 0;
char *s = str;
int j;
while (*s != '\0')
{
s++;
length++;
}
i = length - 1;
for (j = 0 ; j <= i ; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
