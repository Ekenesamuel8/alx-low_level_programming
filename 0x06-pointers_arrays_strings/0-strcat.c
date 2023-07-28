#include "main.h"

/**
 *_strcat - concentacate two strings
 *@dest: strings 1
 *@src: strings 2
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int q, slen, dlen;

	slen = 0;
	dlen = 0;
	for (q = 0; dest[q] != '\0'; q++)
		dlen++;
	for (q = 0; src[q] != '\0'; q++)
		slen++;
	for (q = 0; q <= slen; q++)
	{
		dest[dlen + q] = src[q];
	}
	dest[q] = '\0';
	return (dest);
}
