#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - unction that returns the sum of all its parameters.
 * @n: parameters giving
 * Return: pointer ad
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list we;
	unsigned int u;
	int ad = 0;

	va_start(we, n);

	if (n == 0)
		return (0);

	for (u = 0; u < n; u++)
		ad += va_arg(we, unsigned int);
	va_end(we);
	return (ad);
}


