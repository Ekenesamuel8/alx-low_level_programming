#include <stdio.h>

/**
 * main - for loop
 *
 * Return:always 0 (success)
 */
int main(void)
{
	int alphnum;
	char alphnums;

	for (alphnum = 48; alphnum <= 57; alphnum++)
	{
		putchar(alphnum);
	}
	for (alphnums = 'a'; alphnums <= 'f'; alphnums++)
	{
		putchar(alphnums);
	}
	putchar('\n');
	return (0);
}
