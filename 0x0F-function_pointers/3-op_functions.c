#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int op_mod(int a, int b);
int op_add(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_sub(int a, int b);
/**
*op_add - returns the addition of a and b
*op_mul - returns the product of a and b
*op_div - returns the result of the division of a by b
*op_sub - returns the difference of a and b
*op_mod - returns the remainder of the division of a by b
*@a: the first number
*@b: the second number
*Return: addition of a and b
**/
int op_add(int a, int b)
{
return (a + b);
}
/**
**op_mul - returns the product of a and b
*@a: the first number
*@b: the second number
*Return: product of a and b
**/
int op_mul(int a, int b)
{
return (a * b);
}
/**
**op_div - returns the result of the division of a by b
*@a: the first number
*@b: the second number
*Return: quoetient of a and b
**/
int op_div(int a, int b)
{
return (a / b);
}
/**
**op_sub - returns the difference of a and b
*@a: the first number
*@b: the second number
*Return: difference of a and b
**/
int op_sub(int a, int b)
{
return (a - b);
}
/**
**op_mod - returns the remainder of the division of a by b
*@a: the first number
*@b: the second number
*Return: remainder of division of a by b
**/
int op_mod(int a, int b)
{
return (a % b);
}

