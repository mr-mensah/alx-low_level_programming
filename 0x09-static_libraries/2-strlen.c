#include "main.h"
/**
 * _strlen - functio to return the length of a string
 * @s: string to be counted
 * Return: i
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
