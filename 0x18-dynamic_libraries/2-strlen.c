#include "main.h"
/**
 * _strlen - function that finds the length
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
