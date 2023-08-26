#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - creates buffer
 * @file: filename
 *
 * Return: pointer
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
 * close_file - closes file
 * @vr: it is closed
 */
void close_file(int vr)
{
int c;
c = close(vr);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close vr %d\n", vr);
exit(100);
}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int beg, end, i, j;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_beg file_end\n");
exit(97);
}
buffer = create_buffer(argv[2]);
beg = open(argv[1], O_RDONLY);
i = read(beg, buffer, 1024);
end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (beg == -1 || i == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
j = write(end, buffer, i);
if (end == -1 || j == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
i = read(beg, buffer, 1024);
end = open(argv[2], O_WRONLY | O_APPEND);
} while (i > 0);
free(buffer);
close_file(beg);
close_file(end);
return (0);
}
