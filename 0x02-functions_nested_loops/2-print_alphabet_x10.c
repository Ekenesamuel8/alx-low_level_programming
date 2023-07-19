#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * main - check the code
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char line;
	char abc;

	for (line = 48; line <= 57; line++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
