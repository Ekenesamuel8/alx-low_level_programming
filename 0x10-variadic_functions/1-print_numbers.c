#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: character
 * @n: numbers
 * Return: pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int o, ad;

	va_start(prt, n);

	for (o = 0; o < n; o++)
	{
		ad = va_arg(prt, const unsigned int);
		printf("%d", ad);

		if (n != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prt);
}
