#include <stdio.h>

/**
 * main - for loop
 *
 * return: always 0 (success)
 */
int main(void)
{
	for (int alphnum = 0; alphnum < 10; alphnum++){
		putchar((alphnum % 10) + '0');
	}	
	for (char alphnums = 'a'; alphnums <= 'f'; alphnums++){
			putchar(alphnums);
	}	
	putchar('\n');
	return (0);
}	
