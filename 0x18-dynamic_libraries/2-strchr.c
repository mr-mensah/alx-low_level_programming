#include "main.h"
/**
 * _strchr - function that finds character
 * @s: argument
 * @c: argument
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int b = 0;
for (; s[b] >= '\0'; b++)
{
if (s[b] == c)
return (&s[b]);
}
return (0);
}
