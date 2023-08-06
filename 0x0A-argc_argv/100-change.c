#include <stdio.h>
#include <stdlib.h>
/**
 * main - prt the minimum num coin to make change for an amount of money.
 * @argc: numbers of argument
 * @argv: argument inputs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, mnc = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	while (c > 0)
	{
		if (c >= 25)
			c -= 25;
		else if (c >= 10)
			c -= 10;
		else if (c >= 5)
			c -= 5;
		else if (c >= 2)
			c -= 2;
		else if (c >= 1)
			c -= 1;
		mnc += 1;
	}
	printf("%d\n", mnc);
	return (0);
}
