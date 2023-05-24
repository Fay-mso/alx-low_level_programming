#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*get_op_func - performs on correct function
*@s: operator that is passed as an argument
*Return: ointer to the function that corresponds
*to the operator given as a parameter
**/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"/", op_div},
{"-", op_sub},
{"%", op_mod},
{"*", op_mul},
{"+", op_add},
{NULL, NULL}
};
int j = 0;
while (ops[j].op != NULL && *(ops[j].op) != *s)
j++;
return (ops[j].f);
}
