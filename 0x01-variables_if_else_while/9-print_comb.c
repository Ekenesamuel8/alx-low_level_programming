#include <stdio.h>

/**
 * main - for loop
 *
 * Return:always 0 (success)
 */
int main(void)
{
	for (int num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num == 9)
			continue;
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
