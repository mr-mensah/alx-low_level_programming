#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes C
 * @c: argument
 * Return: 1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
