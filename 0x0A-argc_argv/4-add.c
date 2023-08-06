#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  program that adds positive numbers
 * @argc: numbers of command line
 * @argv: command line inputs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int q, w, sum = 0;

	for (q = 1; q < argc; q++)
	{
		for (w = 0; argv[q][w] != '\0'; w++)
		{
			if (!isdigit(argv[q][w]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[q]);
	}
	printf("%d\n", sum);
	return (0);
}
