#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocate memory
 * @b: number of memory
 * Return: output
 *
 */
void *malloc_checked(unsigned int b)
{
	int *gig;

	gig = malloc(b);

	if (gig == NULL)
		exit(98);

	return (gig);
}
