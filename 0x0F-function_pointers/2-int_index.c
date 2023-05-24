#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - Searches for an integer value in an array
* and returns the index of the first occurrence, else -1.
* @array: Pointer to the array.
* @size: Size of the array.
* @cmp: Pointer to the comparison function used to compare values.
* Return: index of the first occurrence of the matching value in the array,
* or -1 if the value is not found,
* if the array is empty, or if an error occurs.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (j = 0; j < size; j++)
{
if (cmp(array[j]))
return (j);
}
return (-1);
}
