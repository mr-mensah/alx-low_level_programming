#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number else 0 if
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
