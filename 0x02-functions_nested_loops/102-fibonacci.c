#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fibon1 = 0, fibon2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fibon1 + fibon2;
printf("%lu", sum);
fibon1 = fibon2;
fibon2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
