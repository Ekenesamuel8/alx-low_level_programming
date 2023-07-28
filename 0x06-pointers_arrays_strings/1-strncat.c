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
	int r = strlen(dest);
	int i;

	for (i = 0; i < n && *src[i] != '\0'; i++)
	{
		dest[r + i] = *src[i];
		src++;
	}
	dest[r + i] = '\0';
	return (dest);
}
