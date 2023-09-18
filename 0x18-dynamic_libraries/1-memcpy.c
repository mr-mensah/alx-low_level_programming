#include "main.h"
/**
 *_memcpy - function that copies memory
 *@dest: argument
 *@src: argument
 *@n: argument
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k = 0;
int l = n;
for (; k < l; k++)
{
dest[k] = src[k];
n--;
}
return (dest);
}
