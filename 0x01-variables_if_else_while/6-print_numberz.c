#include <stdio.h>

/**
 * main - for loop
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');

	return (0);
}
