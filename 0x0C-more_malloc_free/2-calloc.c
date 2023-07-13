#include <stdlib.h>
#include "main.h"
/**
 * _memset -function that  fills memory with a constant byte
 * @s: memory that is filled
 * @a: char
 * @n: number of times to copy
 * Return: pointer
 */
char *_memset(char *s, char a, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = a;
}
return (s);
}
/**
 * _calloc -function that allocates memory for an array
 * @nmemb: number of in the array
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
if (nmemb == 0 || size == 0)
return (NULL);
pointer = malloc(size * nmemb);
if (pointer == NULL)
return (NULL);
_memset(pointer, 0, nmemb * size);
return (pointer);
}
