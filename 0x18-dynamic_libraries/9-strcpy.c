#include "main.h"
/**
 * _strcpy - function that copies a string pointed at
 * @dest: argument
 * @src: argument
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int index = 0, len = 0;
while (src[index++])
len++;
for (index = 0; index < len; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
