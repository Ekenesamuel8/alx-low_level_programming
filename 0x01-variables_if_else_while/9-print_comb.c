#include <stdio.h>

/**
 * main - for loop
 *
 * return : always 0 (success)
 */
int main(void)
{
	for (int num=0; num <= 9; num++){
		putchar((num%10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar('\t');
	}	
	putchar('\n');
	return (0);
}	
