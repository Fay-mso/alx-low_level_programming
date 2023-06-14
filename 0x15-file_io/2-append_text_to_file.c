#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <stdio.h>
/**
*append_text_to_file - function that appends text at the end of a file
*@filename: name of the file
*@text_content: pointer
*Return: 1 on success and -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, bytes_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
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
