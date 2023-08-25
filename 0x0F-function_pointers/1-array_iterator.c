#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: target array
 * @size: size of the array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t o;

	if (array == NULL || action == NULL)
		return;
	for (o = 0; o < size; o++)
	{
		action(*array);
		array++;
	}
}
