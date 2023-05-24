#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - prints results of operations
*@argv: array of pointers to arguments
*@argc: arguments given
*Return: 0
**/
int main(int argc, char *argv[]) 
{
if (argc != 4)
{
return (1);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
char *operator = argv[2];

int result;

if (operator[0] == '+')
result = op_add(num1, num2);
}
else if (operator[0] == '-')
{
result = op_sub(num1, num2);
}
else if (operator[0] == '*')
{
result = op_mul(num1, num2);
}
else if (operator[0] == '/')
{
result = op_div(num1, num2);
}
else if (operator[0] == '%')
{
result = op_mod(num1, num2);
}
else
{
return (1);
}
return (0);
}
