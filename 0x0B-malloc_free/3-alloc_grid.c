#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: number of columes
 * @height: number of rows
 * Return: pointer to arrsy
 */
int **alloc_grid(int width, int height)
{
	int **output;
	int q;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (q = 0; q < height; q++)
	{
		output[q] = malloc(sizeof(int) * width);

		if (output[q] == NULL)
		{
			free(output);
			for (w = 0; w <= height; w++)
				free(output[w]);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			output[q][w] = 0;
	}
	return (output);
}
