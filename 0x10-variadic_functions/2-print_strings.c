#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - ptrin strings
 * @separator: character
 * @n: num of character
 * Return: pointer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int e;
	char *wa;

	va_list ptr_wa;

	va_start(ptr_wa, n);

	for (e = 0; e < n; e++)
	{
		wa = va_arg(ptr_wa, char *);

		if (wa == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", wa);
		}
		if (e != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_wa);
}
