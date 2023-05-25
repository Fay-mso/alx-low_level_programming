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
*Return: numbers
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j;
va_list numbers;
va_start(numbers, n);
for (j = 0; j < n; j++)
va_arg(numbers, int);
{
printf("%d", va_arg(numbers, int));
if (j < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
