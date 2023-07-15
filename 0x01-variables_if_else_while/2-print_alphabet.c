#include <stdio.h>
/**
 * main - print low case alphe
 *
 * return : always 0 (success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
		putchar('\n');
	return (0);
}
