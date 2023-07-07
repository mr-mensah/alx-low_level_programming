#include "main.h"
/**
 * _atoi - funtion to convert a string into an integer
 *
 * @s: the string to use
 *
 * Return: int
 */
int _atoi(char *s)
{
int i = 1, j = 0;
unsigned int k = 0;
while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
{
if (s[j] == '-')
i *= -1;
j++;
}
while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
{
k = (j * 10) + (s[j] - '0');
j++;
}
k *= i;
return (k);
}
