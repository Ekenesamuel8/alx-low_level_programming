#include "main.h"
#include <stdio.h>
/**
 * _strncat - combine two strings by selecting what u want to combine
 * @dest: destination string
 * @src: source strings
 * @n: numbers of strings i wamt
 * Return: destination strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int r = destlen;
	int i;
	for (i = 0; dest[i]; i++)
		destlen++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[r + i] = *src;
		src++;
	}
	dest[r + i] = '\0';
	return (dest);
}
