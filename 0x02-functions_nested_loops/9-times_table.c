#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
int i, a, e;
for (i = 0; i < 10; i++)
{
for (a = 0; a < 10; a++)
{
e = a * i;
if (a == 0)
{
_putchar(e + '0');
}
if (e < 10 && a != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(e + '0');
} else if (e >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((e / 10) + '0');
_putchar((e % 10) + '0');
}
}
_putchar('\n');
}
}
