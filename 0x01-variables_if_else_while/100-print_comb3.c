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

	for (num = 48; num < 57; num++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num2 > num)
			{
				putchar(num);
				putchar(num2);
				if (num != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}	
	putchar ('\n');
	return (0);
}
