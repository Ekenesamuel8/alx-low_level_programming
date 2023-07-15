#include <stdio.h>

/**
 * main - for loop
 *
 * return: always 0 (success)
 */
int main(void)
{
	for (int num = 0; num < 99; num++){
		for (int num2 = num + 1; num <= 99; num++){

			putchar(num / 10 + '0');
			putchar((num % 10) + '0');
			putchar('\t');
			putchar (num2 / 10 + '0');
			putchar((num2 % 10) + '0');

			if (num == 99 && num2 == 98)
				continue;
				putchar(',');
				putchar('\t');
			}
		}
			putchar('\n');
	return (0);
}	
