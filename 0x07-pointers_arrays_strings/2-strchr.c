#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: the strings
 * @c: looking for 'c' in the strings
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
}
