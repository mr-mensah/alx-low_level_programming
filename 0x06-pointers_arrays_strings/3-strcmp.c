#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: input string
 * @s2: input string
 *
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
