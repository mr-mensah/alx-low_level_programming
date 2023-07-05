#include "main.h"
int check_pal(char *s, int i, int l);
int _strlength_recursion(char *s);
/**
 * is_palindrome - function that returns 1 if a string is a palindrome else 0
 * @s: string
 *
 * Return: 1 if it is  else 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlength_recursion(s)));
}
/**
 * _strlength_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlength_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlength_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
return (0);
if (i >= l)
return (1);
return (check_pal(s, i + 1, l - 1));
}
