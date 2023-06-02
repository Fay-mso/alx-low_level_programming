#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_node - adds new node at the beginning of linked list
*@str: new string to be added
*@head: double pointer to the string
*Return: the address of the new element, or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
while (str[len])
len++;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (*head);
}
