#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - prints anything
*@format: list of types of arguments passed to the function
**/
void print_all(const char * const format, ...)
{
va_list lists;
char c;
double doublevalue;
char *strvalue;
int intvalue;
const char *ptr = format;
va_start(lists, format);
while (*ptr != '\0')
{
switch (*ptr)
{
case 'f':
doublevalue = va_arg(lists, double);
printf("%f", doublevalue);
break;
case 'c':
c = (char) va_arg(lists, int);
printf("%c", c);
break;
case 'i':
intvalue = va_arg(lists, int);
printf("%d", intvalue);
break;
case 's':
strvalue = va_arg(lists, char *);
if (strvalue != NULL)
{
printf("%s", strvalue);
break;
}
printf("(nil)");
break;
default:
break;
}
while (*(ptr + 1) != '\0' && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
{
printf(", ");
}
ptr++;
}
va_end(lists);
printf("\n");
}

