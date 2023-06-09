#include <unistd.h>
#include "main.h"
/**
*_putchar - outputs character to stdout
*@c: character to be printed
*Return: 1 on success and -1 on error
**/
int_putchar(char c)
{
return (write(1, &c, 1));
}
