#include "main.h"
#include <stdlib.h>
/**
* this will read_textfile- in the STDOUT.
* @filename: the exact-text to be read
* @letters: numb of exact-text to be read
* Return: w- number of bytes and read printed
*        to return 0 if it fails otherwise is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t bk;
ssize_t w;
ssize_t t;
bk = open(filename, O_RDONLY);
if (bk == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(bk, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(bk);
return (w);
}
