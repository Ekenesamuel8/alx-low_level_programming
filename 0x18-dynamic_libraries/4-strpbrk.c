#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer holdin destination string
 * @accept: pointer holding source string
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int q, w;

	for (q = 0; s[q] != '\0'; q++)
	{
		for (w = 0; accept[w] != '\0'; w++)
		{
			if (s[q] == accept[w])
				return (s + q);
		}
	}
	return (0);
}
