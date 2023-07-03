#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int j = 0;
int k = 0;
for (i = 0; i < size; i++)
{
j += a[i];
a += size;
}
a += size;
for (i = 0; i < size; i++)
{
k += a[i];
a += size;
}
printf("%d, %d\n", j, k);
}
