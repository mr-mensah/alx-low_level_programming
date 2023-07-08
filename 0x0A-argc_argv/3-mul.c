#include <stdio.h>
#include "main.h"

/**
 * _atoi - program that multiplies two numbers
 * @s: string
 * Return: j
 */
int _atoi(char *s)
{
int i, j, k, l, m, n;
i = 0;
j = 0;
k = 0;
l = 0;
m = 0;
n = 0;
while (s[l] != '\0')
l++;
while (i < l && m == 0)
{
if (s[i] == '-')
++j;
if (s[i] >= '0' && s[i] <= '9')
{
n = s[i] - '0';
if (j % 2)
n = -n;
k = k * 10 + n;
m = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
m = 0;
}
i++;
}
if (m == 0)
return (0);
return (j);
}

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: arrays
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int r, a, b;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
r = a * b;
printf("%d\n", r);
return (0);
}
