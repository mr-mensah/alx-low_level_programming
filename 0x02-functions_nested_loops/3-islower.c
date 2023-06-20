#include "main.h"
/*
 * _islower - checks the lowest character
 * @c: is the char to be checked
 * Return: 1 if c is lower case
 * Return: 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
