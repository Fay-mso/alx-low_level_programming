#include <string.h>
#include "main.h"
#include <stdio.h>
/**
*flip_bits - function that returns the number of bits needed
*to flip to get from one number to another
*@n:character one
*@m: character two
*Return: bits changed
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}

