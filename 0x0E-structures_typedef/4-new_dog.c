#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function that return the length of a string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: buffer in which we copy the string
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int length, i;
length = 0;
while (src[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int i, j;
i = _strlen(name);
j = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (i + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (j + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
