#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative Test function for positive or negative
 * Return:0-no error,non zero value if error.
 **/
void positive_or_negative (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >  0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return;
}
