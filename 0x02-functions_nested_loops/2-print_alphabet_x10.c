#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 * Return : Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char jz;
int i;
i = 0;
while (i < 10)
{
for (jz = 'a'; jz <='z'; jz++)
{
_putchar(jz);
}
_putchar('\n');
i++;
}
}
