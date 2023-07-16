#include <stdio.h>
/**
 * main - print low case alphe
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
