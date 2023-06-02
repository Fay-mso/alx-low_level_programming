#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_list - prints all elements of list_h
*@h: pointer to list_t
*Return: the number of nodes
**/
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
if (current == NULL)
{
printf("[0] (nil)\n");
return (count);
}
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%lu] %s\n", (unsigned long)(count + 1), current->str);
current = current->next;
count++;
}
}
return (count);
}
