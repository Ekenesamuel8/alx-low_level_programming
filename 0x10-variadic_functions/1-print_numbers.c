#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int o;
	int e, ad = 0, dd = 0;

	va_start(prt, separator, n);

	for (e = 0; separator[e] < '\0'; e++)
		ad = e;
	for (o = 0; o < n; o++)
		separator[e + n] = ad;
	dd = separator[e + n];
	dd 



