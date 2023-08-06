#include <stdio.h>

/**
 * main - for loop
 *
 * Return:always 0 (success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 100; num++)
	{
		for (num2 = 1; num <= 100; num2++)
		{
			if (num < num2)
			{
				putchar((num / 10) + 0);
				putchar((num % 10) + 0);
				putchar('\t');
				putchar((num2 / 10) + 0);
				putchar((num2 % 10) + 0);
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
