#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
/**
*create_file - function that creates a file
*@filename: name of the file to create
*@text_content: pointer totring
*Return: 1 onuccess, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
int fd, len, bytes_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len] != '\0'; len++)
;
bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
