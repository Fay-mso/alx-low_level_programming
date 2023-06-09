#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator- iterates over an integer array
*and performs action on each element
*@array: pointer to an integer array
*function that executes a function
*@size: size of the array
*@action: pointer to the function
*Return: NULL
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (array == NULL || action == NULL)
return;
for (j = 0; j < size; j++)
{
action(array[j]);
}
}
