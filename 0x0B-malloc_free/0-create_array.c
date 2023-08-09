#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int q;

	if (size == 0)
		return (NULL);
	ary = malloc(sizeof(char) * size);

	if (ary == NULL)
		return (NULL);

	for (q = 0; q < size; q++)
		ary[q] = c;
	return (ary);
}
