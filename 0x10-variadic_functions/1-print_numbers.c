#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*print_numbers - a function that prints numbers followed by the new line
*@separator: string that is printed between numbers
*@n: integers passed
*@...: indicates function accepts various arguments
*Return: num
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j;
va_list num;
va_start(num, n);
for (j = 0; j < n; j++)
va_arg(num, int);
{
printf("%d", va_arg(num, int));
if (j != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
