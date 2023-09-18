#include "main.h"
/**
 * _memset - function that fills memory
 * @s: memory
 * @b: argument
 * @n: bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j
] = b;
n--;
}
return (s);
}
