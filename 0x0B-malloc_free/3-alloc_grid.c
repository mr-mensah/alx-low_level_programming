#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimension array of int
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **poi;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
poi = malloc(sizeof(int *) * height);
if (poi == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
poi[a] = malloc(sizeof(int) * width);
if (poi[a] == NULL)
{
for (; a >= 0; a--)
free(poi[a]);
free(poi);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
poi[a][b] = 0;
}
return (poi);
}
