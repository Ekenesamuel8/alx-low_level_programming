#include <stdio.h>

/**
 * main - for loop
 *
 * return: always 0 (success)
 */
int main(void)
{
	for (int num = 0; num < 100; num++)
	{
		for (int num2 = 0; num < 100; num2++)
		{
			if (num < num2)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar('\t');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num == 98 && num2 == 99)
				{
					break;
				}
				putchar(',');
				putchar('\t');
				
			}
		}	
	}
	putchar('\n');
	return (0);
}	
