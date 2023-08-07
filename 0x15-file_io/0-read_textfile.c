#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- function reads text file print to POSIX standard output
 * @filename: text
 * @letters: letters
 * Return: c
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *star;
ssize_t mv;
ssize_t c;
ssize_t t;
mv = open(filename, O_RDONLY);
if (mv == -1)
return (0);
star = malloc(sizeof(char) * letters);
t = read(mv, star, letters);
c = write(STDOUT_FILENO, star, t);
free(star);
close(mv);
return (c);
}
