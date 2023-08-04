#include "main.h"

/**
 * _strlen - return the lenght of the string
 * @s: string
 * Return: longi
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
