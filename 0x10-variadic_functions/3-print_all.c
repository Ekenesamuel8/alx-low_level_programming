#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: format specifier
 * Return: som
 *
 */
void print_all(const char * const format, ...)
{
	int q, stat;
	char *xtr;
	va_list ram;

	va_start(ram, format);
	q = 0;

	while (format != NULL && format[q] != '\0')
	{
		switch (format[q])
		{
			case 'i':
				printf("%d", va_arg(ram, int));
				stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(ram, int));
				stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(ram, double));
				stat = 0;
				break;
			case 's':
				xtr = va_arg(ram, char *);
				if (xtr == NULL)
					xtr = "(nil)";
				printf("%s", xtr);
				stat = 0;
				break;
			default:
				stat = 1;
				break;
		}
		if (format[q + 1] != '\0' && stat == 0)
			printf(", ");
		q++;
	}
	printf("\n");
	va_end(ram);
}
