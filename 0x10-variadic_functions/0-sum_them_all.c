#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*sum_them_all - name of function that adds all the parameters given
*@n: parameters passed to a function
*@...: a variable that calculates sum
* Return: 0
**/
int sum_them_all(const unsigned int n, ...)
{
unsigned int j, sum = 0;
va_list ptr;
va_start(ptr, n);
for (j = 0; j < n; j++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}
