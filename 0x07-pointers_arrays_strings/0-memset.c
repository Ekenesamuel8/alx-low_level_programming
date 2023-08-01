#include "main.h"

/**
 *_memset - Write a function that fills memory with a constant byte.
 *@s: destination pointer
 *@b: the character i want to store in the pointer s
 *@n: the size of byte i want to keep in the address
 *Return: the pointer *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; s++)
	{
		s[x] = b;
	}
	return (s);
}
