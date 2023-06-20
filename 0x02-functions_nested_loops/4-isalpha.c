#include "main.h"

/**
 * _isalpha - Checks for alphabetic charater
 * @c: characetr to be checked
 * Return: 1 if c is a letter, lowercase or upper case esle return 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
