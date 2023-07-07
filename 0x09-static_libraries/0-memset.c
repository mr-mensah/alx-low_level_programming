#include "main.h"
/**
 * _memset - fill a memory with a specific value
 * @s: starting address to be filled
 * @b: the wanted value
 * @n: bytes to be changed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
