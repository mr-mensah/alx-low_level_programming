#include <stdio.h>
#include "main.h"
/**
 *  main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
