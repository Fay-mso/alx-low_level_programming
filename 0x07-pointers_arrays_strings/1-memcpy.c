#include <stdio.h>
#include <string.h>
#include "main.h"

/*
*_memcpy() function copies n bytes from memory area
*@dest: pointer to destination array
*@src: pointer to data source
*@n: number of bytes
* return: copied bytes
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int i = 0;

int j = n;
for (;i<j;i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
