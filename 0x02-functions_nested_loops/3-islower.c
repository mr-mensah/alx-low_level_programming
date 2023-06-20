#include "main.h"
/**
 * _islower - checks the lowest character
 * @c: is the character to be checked
 * Return: 1 if c is lower case else return 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
