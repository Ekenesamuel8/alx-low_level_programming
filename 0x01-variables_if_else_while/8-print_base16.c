#include <stdio.h>

/**
 * main - for loop
 *
 * Return:always 0 (success)
 */
int main(void)
{
	for (int alphnum = 48; alphnum <= 57; alphnum++)
	{
		putchar(alphnum);
	}
	for (char alphnums = 'a'; alphnums <= 'f'; alphnums++)
	{
		putchar(alphnums);
	}
	putchar('\n');
	return (0);
}
