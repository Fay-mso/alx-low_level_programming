#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_list - frees memory allocated to linked list
*@head: pointer to the list
**/
void free_list(list_t *head)
{
list_t *current;
while (head)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
