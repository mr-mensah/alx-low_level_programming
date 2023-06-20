#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
int i, a;
i = 0;
while (i < 24)
{
a = 0;
while (a < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar('\n');
a++;
}
i++;
}
}
