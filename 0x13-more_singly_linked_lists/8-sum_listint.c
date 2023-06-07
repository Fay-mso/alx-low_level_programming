#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
*sum_listint - function that returns the sum of all the dat
*@head: first node in the linked list
*Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

