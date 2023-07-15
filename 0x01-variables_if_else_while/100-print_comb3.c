#include <stdio.h>

/**
 * main - for loop
 *
 * return : always 0 (success)
 */
int main(void)
{
	for (int num = 0; num < 9; num++){
		for (int num2 = num + 1; num2 <= 9; num2++){
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num == 8 && num2 == 9)
				continue;
				putchar(',');
				putchar(' ');
		}		
		putchar('\n');
	}
	return (0);
}	
