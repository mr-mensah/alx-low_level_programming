#include "main.h"
#include <stdlib.h>
/**
* create_array - function to create array of chars
* @size: size of array
* @c: char
* Return: a
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
a = malloc(sizeof(char) * size);
if (size == 0 || a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
