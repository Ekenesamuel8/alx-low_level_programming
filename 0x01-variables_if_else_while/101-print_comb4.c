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
	int num3;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				if (num < num2 && num2 < num3)
				{
					 putchar(num);
					 putchar(num2);
					 putchar(num3);
					if (num != 55 || num2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
