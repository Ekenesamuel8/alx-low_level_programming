#include <stdio.h>

/**
 * main - loop alphe
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'e' || abc == 'q')
		{
			continue;
		}
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
