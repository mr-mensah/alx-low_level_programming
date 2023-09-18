#include "main.h"
/**
 * _puts - function that prints strings
 * @str: string
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
