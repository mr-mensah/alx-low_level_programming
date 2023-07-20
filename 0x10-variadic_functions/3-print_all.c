#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *a, *b = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", b, va_arg(list, int));
break;
case 'i':
printf("%s%d", b, va_arg(list, int));
break;
case 'f':
printf("%s%f", b, va_arg(list, double));
break;
case 's':
a = va_arg(list, char *);
if (!a)
a = "(nil)";
printf("%s%s", b, a);
break;
default:
i++;
continue;
}
b = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
