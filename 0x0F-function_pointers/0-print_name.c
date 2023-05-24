#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
*function that prints the name
*@name: the string to be added
*@f: is the pointer to the function
*Return: NULL
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
