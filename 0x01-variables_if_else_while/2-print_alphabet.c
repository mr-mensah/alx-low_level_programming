#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
