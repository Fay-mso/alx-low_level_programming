#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
/**
*read_textfile - function that reads a text file
*@letters: number of letters the function read and print
*@filename: text that is read
*Return: number of bytes read or 0 if file name is null
*or expected number of bytes are not read
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, w, t;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
