#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
*list_len - calculates number of nodes
*@h: pointer to linked list
*Return: number of nodes
**/
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
