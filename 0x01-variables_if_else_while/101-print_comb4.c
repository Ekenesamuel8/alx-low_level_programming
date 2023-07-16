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

	for (num = 48; num < 58; num++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			for (num3 = 50; num3 <= 58; num3++)
			{
				if (num3 > num2 && num2 > num)
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
