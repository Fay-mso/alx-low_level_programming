#include <stdio.h>
#include <string.h>

/**Write a function that concatenates two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte
 * Return (0) success
 */
 

 char *_strcat(char *dest, char *src)
{
	int k;
	int h;
	
	k=0;
		while (dest[k]=!'\0')
	{
		k++;
	}

	h=0;
	while (src[h]=!'\0')
		
	{

		h++;

	}

	{

	dest[k]=src[h];
	
	k++;
	h++;

	}	
	dest[k]='\0';
	
	return (dest);

}
