#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Prints alphabtes again without q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
	putchar(i);
}
}
putchar('\n');
return (0);
}
