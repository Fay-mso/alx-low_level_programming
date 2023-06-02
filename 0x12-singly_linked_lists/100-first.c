#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_message(void) __attribute__((constructor));
/**
*print_message - prints a long sentence
**/
void print_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
