#include "main.h"

/**
 *_strncpy - combine two strings
 *@dest: sdestination string
 *@src: source strins
 *@n: number of strings
 *Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;

	for (w = 0; w < n && src[w] != '\0'; w++)
		dest[w] = src[w];
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}
	return (dest);
}
