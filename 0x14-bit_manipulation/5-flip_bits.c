#include "main.h"
/**
 * flip_bits - function that returns the num of bits you would need to change
 * @n: 1st number
 * @m: 2nd number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, count = 0;
unsigned long int old;
unsigned long int new = n ^ m;
for (a = 63; a >= 0; a--)
{
old = new >> a;
if (old & 1)
count++;
}
return (count);
}
