#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fibona = 0, fibon = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fibona + fibon;
printf("%lu", sum);
fibona = fibon;
fibon = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
