#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
*print_strings - function that prints string
*@n: strings passed
*@separator: string to be printed
*@...: function that takes variables to be printed
*Short description: do not print if separator is NULL
*one of the string is NULL, print (nil)
*Return: 0
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list(strings);
unsigned int index;
const char *str;
va_start(strings, n);
for (index  = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}

