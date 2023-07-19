#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function that returns the sum of two numbers
 * @a: first int
 * @b: second int
 * Return: The sum of two numbers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - function that returns the difference of two numbers
 * @a: first int
 * @b: second int
 * Return: The subtration of two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - function that returns the product of two numbers
 * @a: first int
 * @b: second int
 * Return: The product of the two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - function that returns the division of two numbers
 * @a: first int
 * @b: second int
 * Return: The quotient of the two number
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - function that returns the remainder of a division of two numbers
 * @a: first int
 * @b: second in
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
return (a % b);
}
