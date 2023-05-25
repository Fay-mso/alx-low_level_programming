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
*Return: nums
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
va_list nums;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(nums);
printf("\n");
}
