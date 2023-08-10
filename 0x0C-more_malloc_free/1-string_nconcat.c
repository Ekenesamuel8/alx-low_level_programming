#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - functon that concatenates two strings
 * @s1: destination array
 * @s2: sorce srings
 * @n: number of character
 * Return: pointer output
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *w;
	unsigned int p, i, o;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		p = 0;
	else
	{
		for (p = 0; s2[p] != '\0'; p++)
			;
	}

	if (p > n)
		p = n;

	w = malloc(sizeof(char) * (p + n) + 1);

	if (w == NULL)
		return (NULL);
	for (o = 0; o < i; o++)
	{
		w[o] = s1[o];
	}
	for (o = 0; o < p; o++)
		w[o + i] = s2[o];
	w[i + p] = '\0';



	return (w);
}
