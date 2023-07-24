#include "main.h"

/**
 *print_rev - print the string in revase form
 *@s: strings
 */

void print_rev(char *s)
{
	int b;
	int count = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		count++;
	}
	for (b = count - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');

}
