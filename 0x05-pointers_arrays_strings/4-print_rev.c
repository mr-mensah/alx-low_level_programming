#include "main.h"
/**
 * print_rev - reverses strings
 * @s: string to be reversed
 * Return: 0(success)
 */
void print_rev(char *s)
{
int length = 0;
int a;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (a = length; a > 0; a--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
