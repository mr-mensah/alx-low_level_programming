#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: int
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, l = 0;
char *abc;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
l++;
}
l += ac;
abc = malloc(sizeof(char) * l + 1);
if (abc == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
abc[k] = av[i][j];
k++;
}
if (abc[k] == '\0')
{
abc[k++] = '\n';
}
}
return (abc);
}
