#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: numbers of characters
 * @argv: inputed characters
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
		printf("%s\n", argv[q]);

	return (0);
}
