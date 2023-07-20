#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings
 * @...: variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *a;
unsigned int i;
va_start(strings, n);
for (i = 0; i < n; i++)
{
a = va_arg(strings, char *);
if (a == NULL)
printf("(nil)");
else
printf("%s", a);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}

