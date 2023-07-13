#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - funtion to check if a string contains a non-digit char
 * @a: string
 * Return: 0 if a non-digit is found else 1
 */
int is_digit(char *a)
{
int i = 0;
while (a[i])
{
if (a[i] < '0' || a[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strlen - function that returns the length of a string
 * @a: string
 * Return: length of the string
 */
int _strlen(char *a)
{
int i = 0;
while (a[i] != '\0')
{
i++;
}
return (i);
}
/**
 * errors - handles errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - function that multiplies two positive numbers
 * @argc: number
 * @argv: array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *a, *b;
int len1, len2, len, i, carry, digit1, digit2, *result, c = 0;
a = argv[1], b = argv[2];
if (argc != 3 || !is_digit(a) || !is_digit(b))
errors();
len1 = _strlen(a);
len2 = _strlen(b);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = a[len1] - '0';
carry = 0;
for (len2 = _strlen(b) - 1; len2 >= 0; len2--)
{
digit2 = b[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
c = 1;
if (c)
_putchar(result[i] + '0');
}
if (!c)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
