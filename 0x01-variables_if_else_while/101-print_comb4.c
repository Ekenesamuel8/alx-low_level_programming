#include <stdio.h>

/**
 * main - for loop
 *
 * Return:always 0 (success)
 */
int main(void)
{
	for (int num = 48; num < 58; num++)
	{
		for (int num2 = 49; num2 < 58; num2++)
		{
			for (int num3 = 50; num3 <= 58; num3++)
			{
				if (num3 > num2 && num2 > num)
				{
					 putchar(num);
					 putchar(num2);
					 putchar(num3);
					if (num != 55 || num2 != 56)
					{
						putchar(',');
						putchar('\t');
					}
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
