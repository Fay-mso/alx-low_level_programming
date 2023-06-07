#include <strings.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*insert_nodeint_at_index -  function that inserts 
*a new node at a given position
*@idx: index where the new node is added
*@head: pointer to the first node in the list
*@n: data to insert in the new node
* Return: pointer to the new node, or NULL
**/
listint_t *new_node = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
