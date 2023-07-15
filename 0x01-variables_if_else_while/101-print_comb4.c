#include <stdio.h>

/**
 * main - for loop
 * 
 * return : always 0 (success)
 */     
int main(void)
{
       	for (int num = 0; num < 8; num++){
		 for (int num2 = num + 1; num2 < 9; num2++){
		 	for (int num3 = num2 + 1; num3 < 10; num3++){
			 putchar((num % 10) + '0');
			 putchar((num2 % 10) + '0');
			 putchar((num3 % 10) + '0');
			 if (num == 7 && num2 == 8 && num3 == 9)
				 continue;
			 putchar(',');
			 putchar('\t');
			}
		 }
		 putchar('\n');
	}	 
			
	 return (0);
}
