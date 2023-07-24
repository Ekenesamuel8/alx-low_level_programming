#include "main.h"

/**
 *rev_string - reverses a string
 *@s: input
 *Return: string reverse
 */

void rev_string(char *s)
{
	int r;

	for (r = 57; r >= 48; r--)
		_putchar(s[r]);

	_putchar('\n');
}
