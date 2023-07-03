#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: if substring is located- a pointer at the beginning if not null
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
