#include "lists.h"
void showfirst(void)__attribute__ ((constructor));
/**
 * showfirst - print the string before the main strings
 */
void showfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
