#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
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
