#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: numbers of argument
 * @argv: argument sent
 * Return: 1 if error
 */

int main(int argc, char *argv[])
{
	int a, s;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	s = atoi(argv[2]);
	printf("%d\n", a * s);
	return (0);
}
