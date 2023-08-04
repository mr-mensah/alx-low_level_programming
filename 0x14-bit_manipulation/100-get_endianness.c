#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
unsigned int a = 1;
char *c = (char *) &a;
return (*c);
}
